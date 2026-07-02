import sys

if __name__ == "__main__":

	if (len(sys.argv) > 1):
		sys.stdout.write("=== Cyber Archives Recovery & Preservation ===\n")
		sys.stdout.write(f"Accessing file '{sys.argv[1]}'\n")
		content: str = ""

		try:
			f = open(sys.argv[1], "rt")
			content = f.read()
			sys.stdout.write(f"---\n\n{content}\n---\n")
			f.close()
			sys.stdout.write(f"File '{sys.argv[1]}' closed.\n\n")

		except Exception as e:
			sys.stderr.write(f"[STDERR] Error opening file '{sys.argv[1]}': {e}\n")
	
		sys.stdout.write("Transform data:")
		content = content.replace("\n", "#\n")
		sys.stdout.write(f"\n---\n\n{content}\n---\n")

		sys.stdout.write("Enter new file name (or empty): ")
		sys.stdout.flush()
		new_file = sys.stdin.readline()[:-1]
		sys.stdout.write(f"Saving data to '{new_file}'\n")
		try:
			f = open(new_file, "wt")
			f.write(content)
			sys.stdout.write(f"Data saved in file '{new_file}'.\n")
			f.close()

		except Exception as e:
			sys.stderr.write(f"[STDERR] Error opening file '{new_file}': {e}\n")
			sys.stderr.write("Data not saved.\n")
