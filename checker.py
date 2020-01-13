#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns 

sns.set()
def main():

    # create dataframe from C++ outfile
    df = pd.read_csv("dvs.csv", header=0)
    x = df.iloc[:, 0].tolist()
    f = df.iloc[:, 1].tolist()

    # create numpy arrays to compare to
    y = np.cos(x) * np.power(x, -1) - np.sin(x) * np.power(x, -2)

    # create canvas
    fig = plt.figure()
    ax = plt.axes()

    # plot lines
    line = ax.plot(x, y, label=r"Analytic Solution", color="r")
    line2 = ax.scatter(x, f, label=r"Numerical Solution")

    # set preferences
    plt.xlabel("x")
    plt.ylabel("y")
    plt.title(r"Numerical Derivative of $\frac{sin(x)}{x}$")
    plt.legend()

    # show
    plt.grid(True)
    plt.show()
    return 0

main()
