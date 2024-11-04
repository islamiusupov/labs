#include <iostream>

int main() {
    int n;
    double sum = 0.0;

    std::cout << "Введите целое число n: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (2 * i);  
    }

    std::cout << "Сумма S = " << sum << std::endl;

    return 0;
}
