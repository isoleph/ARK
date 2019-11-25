# ARK : Angel's Runge-Kutta Numerical ODE Solver
<div align="center">
    <img src=img/cpp.png width = 150>
</div>

<div align="center">

  [![Status](https://img.shields.io/badge/status-active-success.svg)]()
  [![GitHub Issues](https://img.shields.io/github/issues/isoleph/ARK)](https://github.com/isoleph/ARK/issues)
  [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/isoleph/ARK.svg)](https://github.com/isoleph/ARK/pulls)
  [![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)
  [![Tweet](https://img.shields.io/twitter/url/https/shields.io.svg?style=social)](https://twitter.com/astroparticular)

</div>

ARK is a personal project / C++ macro I wrote to numerically solve differential equations using the [Runge-Kutta Method](https://en.wikipedia.org/wiki/Runge–Kutta_methods). This algorithm is implemented using C++, which I chose for its speed and malleability. ARK can solve first order and second order differential equations; examples of ARK solving the exponential ODE and the Simple Harmonic Oscillator can be seen below!

I also wrote a python file to plot the analytic solutions of these ODEs against the numerical solutions from ARK. This can be found in `rk4_analysis.py`, found in both folders.

You may find different versions of ARK in either the `first_order` folder or `second_order` folder. 

This personal project is in active development, so please feel free to submit [issues](https://github.com/isoleph/ARK/issues) or a [pull request](https://github.com/isoleph/ARK/pulls)! 

<div align="center">
    <img src=img/exp.svg width=50%>
    <p> Solution to the exponential ODE </p>
</div>

<div align="center">
    <img src=img/sho.svg width=50%>
    <p> Solution to the Simple Harmonic Oscilattor </p>
</div>
