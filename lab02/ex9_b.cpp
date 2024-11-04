#include <cmath>
#include <cstdio>

int main() {
    double x, y, distance;
    scanf("%lf %lf", &x, &y);
    distance = sqrt(x*x + y*y);
    printf("%s\n", (y >= 0) && (distance <= 5) ? "Да" : "Нет");
    return 0;
}