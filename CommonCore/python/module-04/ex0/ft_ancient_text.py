import sys

if __name__ == "__main__":

    if (len(sys.argv) == 1):
        print("=== Cyber Archives Recovery ===")
        print(f"Accessing file '{sys.argv[1]}'")

        try:
            f = open(sys.argv[1], "rt")
            print(f"---\n\n{f.read()}\n---")
            f.close()
            print(f"File '{sys.argv[1]}' closed.")

        except Exception as e:
            print(f"Error opening file '{sys.argv[1]}': {e}")
    else:
        print(f"Usage: {sys.argv[0]} <file>")
