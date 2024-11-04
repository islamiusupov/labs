#include <iostream>

bool f(double x, double &result) {
    if (x <= 2) {
        result = (1 / (2 * x + 1 - x)); 
        return true; 
    } else if (x > 2 && x <= 5) {
        result = (3 * x) / 10; 
        return true; 
    } else {
        result = -3 - x; 
        return true; 
    }
}

int main() {
    double a, b;

    std::cout << "Введите два числа a и b: ";
    std::cin >> a >> b;

    double result_f2, result_f0, result_f2a, result_f6, result_fab;
    
    if (!f(2, result_f2)) {
        std::cout << "Не удалось вычислить f(2)." << std::endl;
        return 1;
    }
    
    if (!f(0, result_f0)) {
        std::cout << "Не удалось вычислить f(0)." << std::endl;
        return 1;
    }

    double result_fa;
    if (!f(a, result_fa)) {
        std::cout << "Не удалось вычислить f(a)." << std::endl;
        return 1;
    }

    double two_a = 2 * a;
    if (!f(two_a, result_f2a)) {
        std::cout << "Не удалось вычислить f(2a)." << std::endl;
        return 1;
    }

    if (!f(6, result_f6)) {
        std::cout << "Не удалось вычислить f(6)." << std::endl;
        return 1;
    }

    double ab = a * b;
    if (!f(ab, result_fab)) {
        std::cout << "Не удалось вычислить f(ab)." << std::endl;
        return 1;
    }

    double expression1 = result_f2 - result_f0 * result_fa; // f(2) - f(0) * f(a)
    double expression2 = result_f2a - result_f6 - result_fab; // f(2a) - f(6) - f(ab)

    // Вывод результатов
    std::cout << "f(2) - f(0) * f(a) = " << expression1 << std::endl;
    std::cout << "f(2a) - f(6) - f(ab) = " << expression2 << std::endl;

    return 0;
}
