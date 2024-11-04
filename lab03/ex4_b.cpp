#include <iostream>
#include <cmath>  

int main() {
    int n;
    double x, result;

    std::cout << "Введите целое число n (количество вложений): ";
    std::cin >> n;
    std::cout << "Введите вещественное число x: ";
    std::cin >> x;

    result = x; 
    for (int i = 0; i < n; ++i) {
        result = sqrt(x + result);  
    }

    std::cout << "Результат для выражения b): " << result << std::endl;

    return 0;
}
