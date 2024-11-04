#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    int min_index;

    if (a <= b && a <= c) {
        min_index = 1;
    } else if (b <= a && b <= c) {
        min_index = 2;
    } else {
        min_index = 3;
    }

    std::cout << "Номер наименьшего числа: " << min_index << std::endl;

    return 0;
}
