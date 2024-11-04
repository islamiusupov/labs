#include <iostream>

int main() {
    int a, b, c;
    
    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    int sum = (a > 10 ? a : 0) + (b > 10 ? b : 0) + (c > 10 ? c : 0);

    std::cout << "Сумма чисел, которые больше 10: " << sum << std::endl;

    return 0;
}
