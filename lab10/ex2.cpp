#include <iostream>

void printReverseOrder() {
    int number;

    std::cout << "Введите число (0 для завершения ввода): ";
    std::cin >> number;

    if (number == 0) {
        return;
    }

    printReverseOrder();

    std::cout << number << " ";
}

int main() {
    std::cout << "Введите последовательность чисел:\n";
    
    printReverseOrder();

    std::cout << std::endl;  
    return 0;
}
