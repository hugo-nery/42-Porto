import sys

if __name__ == "__main__":

	if (len(sys.argv) > 1):
		print("=== Cyber Archives Recovery & Preservation ===")
		print(f"Accessing file '{sys.argv[1]}'")
		content: str = ""
		try:
			f = open(sys.argv[1], "rt")
			content = f.read()
			print(f"---\n\n{content}\n---")
			f.close()
			print(f"File '{sys.argv[1]}' closed.\n")

		except Exception as e:
			print(f"Error opening file '{sys.argv[1]}': {e}")

		print("Transform data:")
		content = content.replace("\n", "#\n")
		print(f"---\n\n{content}\n---")
		
		new_file = input("Enter new file name (or empty): ")
		if (not new_file or " " in new_file):
			print("Not saving data.")
		else:
			try:
				print(f"Saving data to '{new_file}'")
				f = open(new_file, "wt")
				f.write(content)
				print(f"Data saved in file '{new_file}'.")
				f.close()

			except Exception as e:
				print(f"Error opening file '{sys.argv[1]}': {e}")

	else:
		print(f"Usage: {sys.argv[0]} <file>")
