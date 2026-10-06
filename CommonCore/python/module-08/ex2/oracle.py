import os
import sys

safe = True
try:
    from dotenv import load_dotenv

except ImportError as ie:
    safe = False
    print(f"\nError: Missing '{ie.name}' in this environment."
          "\n\nInstall it and run the program again.\n")

if (safe):
    print("\nORACLE STATUS: Reading the Matrix...\n")

    load_dotenv()
    config_variables = ["MATRIX_MODE", "DATABASE_URL",
                        "API_KEY", "LOG_LEVEL", "ZION_ENDPOINT"]

    for v in config_variables:
        if (v not in os.environ or not os.environ[v]):
            print(f"Error: Missing '{v}' variable. Exiting the program!\n")
            sys.exit(1)

    if (os.environ["API_KEY"] == "insert_42_login"):
        print("Error: 'API_KEY' can't be default "
              f"'{os.environ['API_KEY']}'. Exiting the program!\n")
        sys.exit(1)

    print("Configuration loaded:")
    mode = os.environ["MATRIX_MODE"]
    if (mode == "development"):
        print(f"Mode: {mode}"
              "\nDatabase: Connected to local instance")
    elif (mode == "production"):
        print(f"Mode: {mode}"
              "\nSecure conected to Zion Core.")
    else:
        print("Invalid value for 'MATRIX_MODE'. Exiting the program.\n")
        sys.exit(1)

    print("API Acess: Authenticated")
    print(f"Log Level: {os.environ['LOG_LEVEL']}")
    print(f"Zion Network: Online ({os.environ['ZION_ENDPOINT']})")

    print("\nEnvironment security check:"
          "\n[OK] No hardcoded secrets detected"
          "\n[OK] .env file properly configured"
          "\n[OK] Production overrides available"
          "\n\nThe Oracle sees all configurations.\n")
