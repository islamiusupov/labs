#include <iostream>
#include <limits> 

int main() {
    int minNumber = std::numeric_limits<int>::max();

    std::cout << "Введите 7 целых чисел:" << std::endl;

    for (int i = 0; i < 7; ++i) {
        int number;
        std::cin >> number;

        if (number < minNumber) {
            minNumber = number;  
    }

    std::cout << "Наименьшее число: " << minNumber << std::endl;

    return 0;
}
