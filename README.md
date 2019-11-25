# ARK : Angel's Runge-Kutta Numerical ODE Solver
<div align="center">
    <img src=img/cpp.png width = 150>
</div>

  [![Status](https://img.shields.io/badge/status-active-success.svg)]()
  [![GitHub Issues](https://img.shields.io/github/issues/isoleph/cpp_crash)](https://github.com/isoleph/cpp_crash/issues)
  [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/isoleph/cpp_crash.svg)](https://github.com/isoleph/cpp_crash/pulls)
  [![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)
  [![Tweet](https://img.shields.io/twitter/url/https/shields.io.svg?style=social)](https://twitter.com/risvoi)

ARK is a personal project / C++ macro I wrote to numerically solve differential equations using the [Runge-Kutta Method](https://en.wikipedia.org/wiki/Runge–Kutta_methods). This algorithm is implemented using C++, which I chose for its speed and malleability. ARK will solve first order and second order differential equations; examples for ARK solving the exponential ODE and the Simple Harmonic Oscillator can be seen below!

I also wrote a python file to plot the analytic solutions of these ODEs against the numerical solutions from ARK. This can be found in `rk4_analysis.py`, found in both folders.

You may find versions of ARK depending on the kind of differential equation you're looking at either the `first_order` folder or `second_order` folder. 

This personal project is in active development, so please feel free to submit issues! 

<div align="center">
    <img src=img/exp.svg width = 150>
    Solution to the exponential ODE
</div>

<div align="center">
    <img src=img/sho.svg width= 150>
    Solution to the Simple Harmonic Oscilattor
</div>
