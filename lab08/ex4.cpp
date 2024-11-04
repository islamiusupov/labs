#include <iostream>

double average(double a, double b) {
    return (a + b) / 2.0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

double average(double a, double b, double c, double d) {
    return (a + b + c + d) / 4.0;
}

int main() {
    double num1, num2, num3, num4;

    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;
    std::cout << "Среднее арифметическое двух чисел: " << average(num1, num2) << std::endl;

    std::cout << "Введите три числа: ";
    std::cin >> num1 >> num2 >> num3;
    std::cout << "Среднее арифметическое трех чисел: " << average(num1, num2, num3) << std::endl;

    std::cout << "Введите четыре числа: ";
    std::cin >> num1 >> num2 >> num3 >> num4;
    std::cout << "Среднее арифметическое четырех чисел: " << average(num1, num2, num3, num4) << std::endl;

    return 0;
}
    