#include <cstdio>


int main() {
    double a, b, c, remaining_number1, remaining_number2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double maxS = a;
    if (b > maxS) {
        maxS = b;
        remaining_number1 = a;
        remaining_number2 = c;
    }
    if (c > maxS) {
        maxS = c;
        remaining_number1 = a;
        remaining_number2 = b;
    }
    if (maxS < remaining_number1 + remaining_number2) {
        printf("Треугольник существует");
    }
    else {
        printf("Треугольник не существует");
    }

    return 0;
}