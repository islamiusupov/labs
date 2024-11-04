#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0; // полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Введите координаты первой точки (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (x2, y2): ";
    cin >> x2 >> y2;

    double segmentLength = distance(x1, y1, x2, y2);
    cout << "Длина соединяющего их отрезка: " << segmentLength << endl;

    double distanceToOrigin1 = distance(x1, y1, 0, 0);
    double distanceToOrigin2 = distance(x2, y2, 0, 0);
    cout << "Расстояние от первой точки до начала координат: " << distanceToOrigin1 << endl;
    cout << "Расстояние от второй точки до начала координат: " << distanceToOrigin2 << endl;

    cout << "Введите координаты третьей точки (x3, y3): ";
    cin >> x3 >> y3;

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    double areaTriangle = triangleArea(a, b, c);
    cout << "Площадь треугольника с вершинами в этих точках: " << areaTriangle << endl;

    cout << "Введите координаты четвертой точки (x4, y4): ";
    cin >> x4 >> y4;

    double d1 = distance(x1, y1, x3, y3);
    double d2 = distance(x2, y2, x4, y4);
    
    double areaQuad = triangleArea(a, d1, c) + triangleArea(b, d1, d2);
    cout << "Площадь четырехугольника с вершинами в этих точках: " << areaQuad << endl;

    return 0;
}
