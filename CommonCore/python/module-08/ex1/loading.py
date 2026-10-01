#Authorized: pandas, requests, matplotlib, numpy, sys, importlib

safe = True

try:
    import numpy
    import pandas
    import matplotlib

except ImportError as ie:
    safe = False
    print(f"\nError: '{ie.name}' is missing in this environment.\n")

if (safe):
    print("\nVersion:")
    print(f"- Numpy {numpy.__version__}")
    print(f"- Pandas {pandas.__version__}")
    print(f"- Matplotlib {matplotlib.__version__}")

    print("\nAll good so far!!\n")

    numpy_matrix = numpy.random.randint(1, 101, size=(2, 2))

    data_frame = pandas.DataFrame(numpy_matrix, columns=['A', 'B'])
    print(data_frame)
    print(data_frame.describe())
