#include <iostream>

void printNumbers(int n) {
    if (n < 1) {
        return;
    }
    printNumbers(n - 1);
    std::cout << n << " ";
}

int main() {
    int n;

    std::cout << "Введите целое число n: ";
    std::cin >> n;

    printNumbers(n);

    std::cout << std::endl; 
    return 0;
}
