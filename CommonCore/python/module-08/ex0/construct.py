
import sys
import os
import site

if __name__ == "__main__":

    print("\nMATRIX STATUS: ", end="")
    if (sys.base_prefix == sys.prefix):
        print("You're still plugged in.")

        print(f"\nCurrent Python: {os.path.realpath(sys.executable)}"
              "\nVirtual Environment: None detected")

        print("\nWARNING: You're in the global environment!"
              "\nThe machines can see everything you install.\n")

        print("To enter the construct, run:"
              "\n   python3 -m venv matrix_env"
              "\n   source matrix_env/bin/activate # On Unix"
              "\n   matrix_env\\Scripts\\activate # On Windows"
              "\n\nThen run this program again.")

    else:
        print("Welcome to the construct.\n")

        print(f"Current Python: {sys.executable}")
        print(f"Virtual Environment: {os.path.basename(sys.prefix)}")
        print(f"Environment Path: {sys.prefix}")

        print("\nSUCCESS: You're in an isolated environment!"
              "\nSafe to install packages without affecting"
              "\nthe global system.")

        print(f"\nPackage installation path:\n{site.getsitepackages()[0]}")
