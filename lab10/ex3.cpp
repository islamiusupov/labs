#include <iostream>
#include <cmath> 

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + countDigits(abs(n) / 10);
}

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "Количество цифр: 1" << std::endl;
    } else {
        int digitCount = countDigits(number);
        std::cout << "Количество цифр: " << digitCount << std::endl;
    }

    return 0;
}
