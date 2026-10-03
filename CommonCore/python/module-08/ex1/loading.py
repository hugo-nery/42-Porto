#Authorized: pandas, requests, matplotlib, numpy, sys, importlib

safe = True

try:
    print("\nLOADING STATUS: Loading programs...\n")

    import pandas
    print(f"[OK] pandas ({pandas.__version__}) - Data manipulation ready")

    import numpy
    print(f"[OK] numpy ({numpy.__version__}) - Numerical computation ready")

    import matplotlib
    import matplotlib.pyplot as plt
    print(f"[OK] matplotlib ({matplotlib.__version__}) - Visualization ready")

except ImportError as ie:
    safe = False
    print(f"Error: '{ie.name}' doesn't exist in this environment.\n")

if (safe):
    print(f"\nAnalyzing Matrix data..."
            "\nProcessing 1000 data points...")
    
    np_matrix = numpy.random.randint(27, 41, size=(4, 3))
    pds_df = pandas.DataFrame(np_matrix, columns=["2024", "2025", "2026"])
    pds_df.index = range(6, len(pds_df) + 6)
    pds_df.plot(marker='o')

    print("Generating visualization...")
    # print(f"{pds_df}\n")
    plt.legend()
    plt.grid(True)
    plt.xticks(pds_df.index)
    plt.yticks(range(0, 51, 5))
    plt.title('Portugal - Jun/Sep')
    plt.xlabel('Month')
    plt.ylabel('Temperature')

    plt.savefig('matrix_analysis.png')
    print(f"\nAnalysis complete!"
            "\nResults saved to: 'matrix_analysis.png'")

