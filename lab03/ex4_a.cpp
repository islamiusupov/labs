#include <iostream>
#include <cmath>

int main() {
    int n;
    double x, result;

    std::cout << "Введите целое число n (количество вложений): ";
    std::cin >> n;
    std::cout << "Введите вещественное число x: ";
    std::cin >> x;

    result = x;  // Начинаем с x
    for (int i = 0; i < n; ++i) {
        result = cos(x + result);  // Вкладываем cos n раз
    }

    std::cout << "Результат для выражения a): " << result << std::endl;

    return 0;
}
