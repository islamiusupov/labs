#include <iostream>

int main() {
    int countNegative = 0; 
    std::cout << "Введите 7 целых чисел:" << std::endl;
    
    for (int i = 0; i < 7; ++i) {
        int number;
        std::cin >> number;

        if (number < 0) {
            countNegative++; 
        }
    }

    std::cout << "Количество отрицательных чисел: " << countNegative << std::endl;

    return 0;
}
