import abc

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
            raise Exception ("Improper numeric data!")

        print(f"\n-Processing data: {in_data}")
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
            raise ValueError ("Improper text data!")
        
        print(f"\n-Processing data: {in_data}")
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
                    for k in i.keys():
                        if (not isinstance(k, str) or not isinstance(i[k], str)):
                            return False
            return True

        elif (isinstance(in_data, dict)):
            for k in in_data.keys():
                if (not isinstance(k, str) or not isinstance(in_data[k], str)):
                    return False
            return True

        else:
            return False

    def ingest(self, in_data: list[dict[str,str]] | dict[str,str]) -> None:
        if (not self.validate(in_data)):
            raise ValueError ("Improper log data!")
        
        if (isinstance(in_data, dict)):
            msg = ": ".join(val for val in in_data.values())
            self.stored_data.append(f"{self.rank}:{msg}")
            self.rank += 1
        
        else: #if (isinstance(in_data, list)):
            for i in in_data:
                msg = ": ".join(val for val in i.values())
                self.stored_data.append(f"{self.rank}:{msg}")
                self.rank += 1


if __name__ == "__main__":
    print("=== Code Nexus - Data Processor ===")

    print("\nTesting Numeric Processor...")
    test_num = NumericProcessor()

    print(f"-Trying to validate input '{42}': {test_num.validate(42)}")
    print(f"-Trying to validate input '{[1, 2, "0"]}': {test_num.validate([1, 2, "0"])}")
    
    try:
        print(f"-Testing invalid ingestion of string 'foo' without prior validation:")
        test_num.ingest("foo")
    except Exception as e:
        print(f"-Got exception: {e}")

    try:
        test_num.ingest([1, 2, 3, 4, 5])

        print("-Extracting 3 values...")
        for i in range(3):
            tup = test_num.output()
            print(f"-Numeric value {tup[0]}: {tup[1]}")
        
    except Exception as e:
        print(f"-Got exception: {e}")


    print("\n\nTesting Text Processor...")
    test_text = TextProcessor()

    print(f"-Trying to validate input '{42}': {test_text.validate(42)}")
    print(f"-Trying to validate input '{["a", "b", "c"]}': {test_text.validate(["a", "b", "c"])}")

    try:
        test_text.ingest([1,2,3,4,5])
    except Exception as e:
        print(f"-Got exception: {e}")

    try:
        test_text.ingest(["Hello", "Nexus", "World"])

        print("-Extracting 1 value...")
        tp = test_text.output()
        print(f"-Text value {tp[0]}: {tp[1]}")

    except Exception as e:
        print(f"Got exception: {e}")


    print("\n\nTesting Log Processor...")
    test_log = LogProcessor()

    print(f"-Trying to validate input '{42}': {test_log.validate(42)}")
    print(f"-Trying to validate input '{"Hello"}': {test_log.validate("Hello")}")
    my_var = [{"a":"amor", "b":"bola"}, {"c":"carro"}]
    print(f"-Trying to validate input '{my_var}': {test_log.validate(my_var)}")

    try:
        print("\n-Processing data: [{'log_level': 'NOTICE', 'log_message': 'Connection to server'},"
        "{'log_level': 'ERROR', 'log_message': 'Unauthorized access!!'}]")

        test_log.ingest([{'log_level': 'NOTICE', 'log_message': 'Connection to server'},
            {'log_level': 'ERROR', 'log_message': 'Unauthorized access!!'}])

        print("-Extracting 2 values...")
        for i in range(2):
            tp = test_log.output()
            print(f"-Log entry {tp[0]}: {tp[1]}")

    except Exception as e:
        print(f"Got exception: {e}")
    
    print()
