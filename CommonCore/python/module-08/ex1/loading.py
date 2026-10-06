def print_versions(modules_list: list) -> None:
    print("Checking dependencies:")
    for m in modules_list:
        if (m.__name__ == "pandas"):
            print(f"[OK] pandas ({pandas.__version__}) "
                  "- Data manipulation ready")

        elif (m.__name__ == "numpy"):
            print(f"[OK] numpy ({numpy.__version__}) "
                  "- Numerical computation ready")

        elif (m.__name__ == "matplotlib"):
            print(f"[OK] matplotlib ({matplotlib.__version__}) "
                  "- Visualization ready")

        else:
            pass


safe_list: list = []
try:
    print("\nLOADING STATUS: Loading programs...\n")
    import pandas
    safe_list.append(pandas)

    import numpy
    safe_list.append(numpy)

    import matplotlib
    from matplotlib import pyplot
    safe_list.append(matplotlib)

except ImportError as ie:
    print_versions(safe_list)
    print(f"Error: Missing '{ie.name}' in this environment. ")

    if (len(safe_list) <= 1):
        print("\n-To install dependencies with 'pip + requirements':"
              "\n  pip install -r 'your_requirements_file.txt'")
    else:
        print("\n-To install missing dependencies with 'pip':"
              "\n  pip install 'missing_package_name'")

    print("\n-To install dependecies with 'Poetry + *.toml file':"
          "\n  pip install poetry"
          "\n  poetry install")

    print("\nThen run the program again.\n")

if (len(safe_list) == 3):
    print_versions(safe_list)

    print("\nAnalyzing Matrix data..."
          "\nProcessing 1000 data points...")

    np_matrix = numpy.random.randint(27, 41, size=(4, 3))
    pds_df = pandas.DataFrame(np_matrix, columns=["2024", "2025", "2026"])
    pds_df.index = pandas.Index(range(6, len(pds_df) + 6))
    pds_df.plot(marker='o')

    print("Generating visualization...")
    # print(f"{pds_df}\n")
    pyplot.legend()
    pyplot.grid(True)
    pyplot.xticks(pds_df.index)
    pyplot.yticks(range(0, 51, 5))
    pyplot.title('Portugal - Jun/Sep')
    pyplot.xlabel('Month')
    pyplot.ylabel('Temperature')

    pyplot.savefig('matrix_analysis.png')
    print("\nAnalysis complete!"
          "\nResults saved to: 'matrix_analysis.png'")

    print("\n\n----------------------------------")
    print("-- Dependencies (Pip vs Poetry) --")
    print("Pip:\n Flat text file, commonly 'requirements.txt';"
          "\n Environment is a bunch of loose folders;"
          "\n Package removal doesn't clean sub-dependencies.")
    print("\nPoetry:\n Structured project file, e.g. 'pyproject.toml';"
          "\n Environment package's and sub-dependencies are mapped;"
          "\n Package removal cleans the exclusive sub-dependencies.\n")
