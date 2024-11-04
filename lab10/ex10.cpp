#include <iostream>

int sumOfDigits(int number) {
    int sum = 0;
    number = std::abs(number);

    while (number > 0) {
        sum += number % 10;
        number /= 10;      
    }

    return sum;
}

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    int result = sumOfDigits(number);
    std::cout << "Сумма цифр числа " << number << " равна " << result << std::endl;

    return 0;
}
