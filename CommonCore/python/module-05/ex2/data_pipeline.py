import abc
import typing


class ExportPlugin(typing.Protocol):

    def process_output(self, data: list[tuple[int, str]]) -> None:
        pass


class DataProcessor(abc.ABC):
    def __init__(self):
        super().__init__()
        self.stored_data :list[str] = []
        self.rank = 0

    @abc.abstractmethod
    def validate(self, in_data: any) -> bool:
        pass

    @abc.abstractmethod
    def ingest(self, in_data: any) -> None:
        pass
    
    def output(self) -> tuple[int, str]:
        if (len(self.stored_data) >= 1):
            rk, txt = self.stored_data.pop(0).split(":", 1)
            return (int(rk), txt)
        return (-1,"")


class DataStream():
    def __init__(self):
        self.processors: list[DataProcessor] = []
        self.stats_dict: dict[DataProcessor, int] = {}
    
    def register_processor(self, proc: DataProcessor) -> None:
        if (isinstance(proc, DataProcessor)):
            self.processors.append(proc)
            self.stats_dict[proc] = 0
    
    def process_stream(self, stream: list[typing.Any]) -> None:
        for item in stream:
            flag: bool = False
            for proc in self.processors:
                if (proc.validate(item)):
                    proc.ingest(item)
                    if (isinstance(item, list)):
                        self.stats_dict[proc] += len(item)
                    else:
                        self.stats_dict[proc] += 1
                    flag = True
                    break
            if (not flag):
                print(f"-DataStream error - Can't process element in stream: {item}")
        
    def print_processors_stats(self) -> None:
        print("\n== DataStream statistics ==")
        if (len(self.stats_dict.keys()) == 0):
            print("No processor found, no data")
        else:
            for key, val in self.stats_dict.items():
                print(f"{self.space_text(key)}: total {val} items processed,"
                      f" remaining {len(key.stored_data)} on processor")

    def space_text(self, proc_name: DataProcessor) -> str:
        text = proc_name.__class__.__name__
        name = ""
        for i in range(len(text)):
            if (i > 0 and text[i].isupper()):
                name += " "
            name += text[i]
        return name
    
    def output_pipeline(self, nb: int, plugin: ExportPlugin) -> None:
        data_to_file: list[tuple[int, str]] = []
        
        for pro in self.processors:
            idx = len(data_to_file)
            
            for i in range(nb):
                tp = pro.output()
                if (tp[0] >= 0):
                    data_to_file.append(tp)
                else:
                    break
    
            plugin.process_output(data_to_file[idx:])
            

class NumericProcessor(DataProcessor):

    def validate(self, in_data: any) -> bool:		
        if (isinstance(in_data, (float, int, list))):
            if (isinstance(in_data, list)):
                for i in in_data:
                    if (not isinstance(i, (float, int))):
                        return False
            return True
        else:
            return False

    def ingest(self, in_data: int | float | list[int | float]) -> None:
        if (not self.validate(in_data)):
            raise Exception ("Improper numeric data!\n")

        print(f"-Processing data: {in_data}")
        if (isinstance(in_data, list)):
            for i in in_data:
                self.stored_data.append(f"{self.rank}:{i}")
                self.rank += 1

        else:
            self.stored_data.append(f"{self.rank}:{in_data}")
            self.rank += 1


class TextProcessor(DataProcessor):

    def validate(self, in_data: any) -> bool:
        if (isinstance(in_data, (str, list))):
            if (isinstance(in_data, list)):
                for s in in_data:
                    if (not isinstance(s, str)):
                        return False
            return True
        else:
            return False

    def ingest(self, in_data: str | list[str]) -> None:
        if (not self.validate(in_data)):
            raise ValueError ("Improper text data!\n")
        
        print(f"-Processing data: {in_data}")
        if (isinstance(in_data, list)):
            for s in in_data:
                self.stored_data.append(f"{self.rank}:{s}")
                self.rank += 1

        else:
            self.stored_data.append(f"{self.rank}:{in_data}")
            self.rank += 1


class LogProcessor(DataProcessor):

    def validate(self, in_data: any) -> bool:
        if (isinstance(in_data, list)):
            for i in in_data:
                if (not isinstance(i, dict)):
                    return False
                else:
                    for k, v in i.items():
                        if (not isinstance(k, str) or not isinstance(v, str)):
                            return False
            return True

        elif (isinstance(in_data, dict)):
            for k, v in in_data.items():
                if (not isinstance(k, str) or not isinstance(v, str)):
                    return False
            return True

        else:
            return False

    def ingest(self, in_data: list[dict[str,str]] | dict[str,str]) -> None:
        if (not self.validate(in_data)):
            raise ValueError ("Improper log data!\n")
        
        print(f"-Processing data: {in_data}")
        if (isinstance(in_data, dict)):
            msg = ": ".join(val for val in in_data.values())
            self.stored_data.append(f"{self.rank}:{msg}")
            self.rank += 1
        
        else: #if (isinstance(in_data, list)):
            for i in in_data:
                msg = ": ".join(val for val in i.values())
                self.stored_data.append(f"{self.rank}:{msg}")
                self.rank += 1


class CSVExporter:
    def __init__(self):
        self.count = 1

    def process_output(self, data: list[tuple[int, str]]) -> None:
        name = "my_csv_" + str(self.count) + ".csv"
        with open (name, "w") as f:
            self.count += 1
            final_data = ",".join(tp[1] for tp in data)
            f.write(final_data)
            
            print(f"\nCSV Output:\n{final_data}")
        

class JSONExporter:
    def __init__(self):
        self.count = 1
    
    def process_output(self, data: list[tuple[int, str]]) -> None:
        name = "my_json_" + str(self.count) + ".json"
        with open (name, "w") as f:
            self.count += 1
            final_data = "{" + ", ".join(f"\"item_{tp[0]}\": \"{tp[1]}\"" for tp in data) + "}"
            f.write(final_data)

            print(f"\nJSON Output:\n{final_data}")


if __name__ == "__main__":
    print("=== Code Nexus - Data Pipeline ===")

    print("\nInitialize Data Stream...")
    data_streamer = DataStream()
    data_streamer.print_processors_stats()

    print("\nRegistering Processors...\n")
    num_proc = NumericProcessor()
    data_streamer.register_processor(num_proc)
    txt_proc = TextProcessor()
    data_streamer.register_processor(txt_proc)
    log_proc = LogProcessor()
    data_streamer.register_processor(log_proc)

    my_var = 	['Hello world',
                [3.14, -1, 2.71],
                [{'log_level': 'WARNING', 'log_message': 'Telnet access! Use ssh instead'},
                     {'log_level': 'INFO', 'log_message': 'User wil is connected'}],
                42,
                ['Hi', 'five']]
    print(f"\nFirst batch of data to stream:\n{my_var}\n")
    data_streamer.process_stream(my_var)
    data_streamer.print_processors_stats()


    print("\n\nSend 3 processed data from each processor to a CSV plugin:")
    csv_exp = CSVExporter()
    data_streamer.output_pipeline(3, csv_exp)
    data_streamer.print_processors_stats()


    my_var = 	[21,
                ['I love AI', 'LLMs are wonderful', 'Stay healthy'],
                [{'log_level': 'ERROR', 'log_message': '500 server crash'},
                    {'log_level': 'NOTICE', 'log_message': 'Certificate expires in 10 days'}],
                [32, 42, 64, 84, 128, 168],
                'World hello']
    print(f"\n\nSend another batch of data: {my_var}\n")
    data_streamer.process_stream(my_var)
    data_streamer.print_processors_stats()

    print("\nSend 5 processed data from each processor to a JSON plugin:")
    json_exp = JSONExporter()
    data_streamer.output_pipeline(5, json_exp)

    data_streamer.print_processors_stats()

    print()
