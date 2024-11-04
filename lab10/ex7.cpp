#include <iostream>
#include <cmath>

double calculateExpression(int n) {
        if (n == 1) {
        return std::sqrt(2);
    }
    return std::sqrt(2 + calculateExpression(n - 1));
}

int main() {
    int n;
    std::cout << "Введите количество радикалов n: ";
    std::cin >> n;

    double result = calculateExpression(n);
    std::cout << "Результат для x_" << n << " = " << result << std::endl;

    return 0;
}
