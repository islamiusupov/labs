#include <iostream>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    else if (b < 0) {
        return -multiply(a, -b);
    }
    return a + multiply(a, b - 1);
}

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    int result = multiply(num1, num2);
    std::cout << "Результат умножения: " << result << std::endl;

    return 0;
}
