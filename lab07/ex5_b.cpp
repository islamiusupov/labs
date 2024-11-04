#include <iostream>

double power(double x, int n) {
    double result = 1.0;

    for (int i = 0; i < n; ++i) {
        result *= x; 
    }

    return result;
}

int main() {
    double x;
    int n;

    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << "Введите целое число n: ";
    std::cin >> n;

    double result = power(x, n);

    std::cout << x << "^" << n << " = " << result << std::endl;

    return 0;
}
