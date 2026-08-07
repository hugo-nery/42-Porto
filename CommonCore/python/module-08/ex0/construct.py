import sys
import site


if __name__ == "__main__":
	print("=== Environment detection ===\n")
	print("Which environment am I at?")
	if (sys.prefix == sys.base_prefix):
		print(" - Global system environment.\n")
		
		print("\n== Virtual Environment Instructions ==")
		print("On your terminal:")
		print("\nTo Create a environment, execute:\n 'python3 -m venv .venv'")
		print("\nTo Activate the environment, execute:\n 'source .venv/bin/activate'")
		print("\nAfter the previuos command you're using the virtual environment.")
		print("\nWhenever you're done, to exit the VE, execute:\n 'deactivate'")

	else:
		print(" - Virtual environment.\n")

	print(f"Your current environment sits at: '{sys.prefix}'")

	print("\ndir's from site.getsitepackages():")
	for dir in site.getsitepackages():
		print(f"{dir}\n")

	# print(f"sys.base_prefix = {sys.base_prefix}\n")



