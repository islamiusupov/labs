#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    int even_count = (a % 2 == 0 ? 1 : 0) + (b % 2 == 0 ? 1 : 0) + (c % 2 == 0 ? 1 : 0);

    std::cout << "Количество четных чисел: " << even_count << std::endl;

    return 0;
}
