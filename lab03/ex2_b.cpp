#include <iostream>
#include <cmath>  

int main() {
    int sumTwoDigit = 0; 
    std::cout << "Введите 7 целых чисел:" << std::endl;

    for (int i = 0; i < 7; ++i) {
        int number;
        std::cin >> number;

        if (abs(number) >= 10 && abs(number) <= 99) {
            sumTwoDigit += number; 
        }
    }

    std::cout << "Сумма двузначных чисел: " << sumTwoDigit << std::endl;

    return 0;
}
