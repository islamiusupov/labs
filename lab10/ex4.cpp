#include <iostream>

void printBinary(int n) {
    if (n == 0) {
        return;
    }

    printBinary(n / 2);

    std::cout << (n % 2);
}

int main() {
    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "Двоичное представление: 0" << std::endl;
    } else {
        std::cout << "Двоичное представление: ";
        printBinary(number);
        std::cout << std::endl; 
    }

    return 0;
}
