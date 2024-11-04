#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    if (x < 0) {
        return 2.0 / 3.0;
    } else if (x >= 0 && x <= 2 * 3.14) {
        return x * x - 3;
    } else {
        return (1 + pow(x, 3)) / (2 * x);
    }
}

int main() {
    //  a)
    double a, b;
    cout << "Введите два числа a и b: ";
    cin >> a >> b;

    double result = 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a * b);
    cout << "Результат выражения 12.5 + f(2) - f(4)*f(10) + f(a) - f(b) + f(ab): " << result << endl;

    //  b)
    const int size = 7;
    double x[size];
    double y[size];

    cout << "Введите " << size << " элементов массива x: ";
    for (int i = 0; i < size; ++i) {
        cin >> x[i];
    }

    // Вычисляем значения y[i] = f(x[i])
    for (int i = 0; i < size; ++i) {
        y[i] = f(x[i]);
    }

    int negativeCount = 0;
    double maxElement = y[0];
    
    cout << "Массив y: ";
    for (int i = 0; i < size; ++i) {
        cout << y[i] << " ";
        if (y[i] < 0) {
            ++negativeCount;
        }
        if (y[i] > maxElement) {
            maxElement = y[i];
        }
    }
    cout << endl;

    cout << "Количество отрицательных элементов в массиве y: " << negativeCount << endl;
    cout << "Максимальный элемент в массиве y: " << maxElement << endl;

    return 0;
}
