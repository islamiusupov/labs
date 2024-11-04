#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    int middle;

    if ((a > b && a < c) || (a < b && a > c)) {
        middle = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        middle = b;
    } else {
        middle = c;
    }

    std::cout << "Среднее число: " << middle << std::endl;

    return 0;
}
