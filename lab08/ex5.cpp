#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

int area(int side, int height) {
    return (side * height) / 2;
}

int area(int side1, int side2, int angle) {
    double angleRad = angle * (PI / 180.0);
    return (side1 * side2 * sin(angleRad)) / 2;
}

double area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    int choice;
    
    std::cout << "Выберите способ расчета площади треугольника:\n";
    std::cout << "1. По стороне и высоте\n";
    std::cout << "2. По двум сторонам и углу между ними\n";
    std::cout << "3. По трем сторонам\n";
    std::cout << "Введите номер варианта: ";
    std::cin >> choice;

    if (choice == 1) {
        int side, height;
        std::cout << "Введите сторону и высоту: ";
        std::cin >> side >> height;
        std::cout << "Площадь треугольника: " << area(side, height) << std::endl;
    } else if (choice == 2) {
        int side1, side2, angle;
        std::cout << "Введите две стороны и угол между ними (в градусах): ";
        std::cin >> side1 >> side2 >> angle;
        std::cout << "Площадь треугольника: " << area(side1, side2, angle) << std::endl;
    } else if (choice == 3) {
        double side1, side2, side3;
        std::cout << "Введите три стороны: ";
        std::cin >> side1 >> side2 >> side3;
        std::cout << "Площадь треугольника: " << area(side1, side2, side3) << std::endl;
    } else {
        std::cout << "Некорректный выбор." << std::endl;
    }

    return 0;
}
