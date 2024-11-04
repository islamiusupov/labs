#include <iostream>
#include <cmath>
#include <functional>

double Root(std::function<double(double)> f, double a, double b, double eps) {
    if (f(a) * f(b) >= 0) {
        std::cerr << "Ошибка: f(a) и f(b) должны иметь разные знаки." << std::endl;
        return NAN;
    }

    double m;
    while ((b - a) > eps) {
        m = (a + b) / 2; 

        if (fabs(f(m)) < eps) {
            return m;
        }

        if (f(a) * f(m) < 0) {
            b = m; 
        } else {
            a = m; 
        }
    }

    return (a + b) / 2;
}

double exampleFunction(double x) {
    return x * x - 2;
}

int main() {
    double a = 0, b = 2; 
    double eps = 1e-6;

    double root = Root(exampleFunction, a, b, eps);
    if (!std::isnan(root)) {
        std::cout << "Найденный корень: " << root << std::endl;
    }

    return 0;
}
