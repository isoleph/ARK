// g++ --std=c++17 -o deriv derivatives.cpp
/****************************************************
* Name: derivatives.cpp								*
* Description: A script to solve for derivatives at *
*   a point using limits                            *
* Supports:                                         *
*   - First and Second Derivatives                  *
* Author: Angel A. Valdenegro                       *
*****************************************************/ 

#include <iostream>
#include <fstream>
#include <cmath>
#include <functional>

// define constants to use for derivatives
constexpr const double increment = 0.00001;
constexpr const double increment2 = 0.000000001;

// function desired to differentiate
inline double myFunction(double x) {
    return sin(x)/x;
}

namespace dq {
    // definiton of the first derivative numerically
    double derivative(double x, std::function<double (double)> func) {
        return (func(x + increment) - func(x))/(increment);
    }
    // definition of the second derivative numerically
    double secondDerivative(double x, std::function<double (double)> func) {
        return (func(x + 2 * increment) - 2 * func(x + increment) + func(x))/(increment2);
    }
}

// calculate over N points within x_0 -> x_f for f'(x)
int iterator(double x_0, double x_f, int N) {
    double dx = (x_f - x_0)/N; 
    double x_i = 0;

    std::ofstream outfile;
    outfile.open("dvs.csv");
    for (int i = 0; i <= N; i++) {
        x_i += dx;
        outfile << x_i << ", " << dq::derivative(x_i, myFunction) << std::endl;
    }
    outfile.close();
    return 0;
}


int main() {
    iterator(0, 10 * 3.14159, 100);
    return 0;
}
