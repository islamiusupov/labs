#include <iostream>

int add(int a, int b) {
    if (b == 0) {
        return a;
    }
    return add(a + 1, b - 1);
}

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    int result = add(num1, num2);
    std::cout << "Результат сложения: " << result << std::endl;

    return 0;
}
