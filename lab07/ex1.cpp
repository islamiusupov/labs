#include <iostream>
using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Ошибка: Деление на ноль!" << endl;
        return 0;
    }
}

int main() {
    double a, b;
    cout << "Введите два числа (a и b): ";
    cin >> a >> b;

    double result = add(
        multiply(5, add(subtract(a, 2), b)), 
        multiply(1000, a)                     
    );

    cout << "Результат выражения 5(a – 2 + b) + 1000a: " << result << endl;

    return 0;
}
