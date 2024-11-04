#include <cstdio>


int main() {
    double a, b, c, remaining_number1, remaining_number2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double maxS = a;
    if (b >= maxS) {
        maxS = b;
        remaining_number1 = a;
        remaining_number2 = c;
    }
    if (c >= maxS) {
        maxS = c;
        remaining_number1 = a;
        remaining_number2 = b;
    }
    if (maxS < remaining_number1 + remaining_number2) {
        if (a == b && b == c) {
            printf("Треугольник равносторонний\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Треугольник равнобедренный\n");
        }
        else if (maxS * maxS == remaining_number1 *remaining_number1 + remaining_number2 * remaining_number2) {
            printf("Треугольник прямоугольный\n");
 
        }
    }
    else {
        printf("Треугольник не существует");
    }

    return 0;
}