#include <iostream>

int main() {
    double step = 3.14 / 6;
    double end = 2 * 3.14;

    // Цикл for для табуляции значений функции
    for (double x = 0; x <= end; x += step) {
        double y = cos(x);  // Вычисление значения функции cos(x)

        // Вывод значения x и соответствующего значения y
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }

    return 0;
}
