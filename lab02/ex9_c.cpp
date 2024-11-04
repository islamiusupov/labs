#include <cmath>
#include <cstdio>

int main() {
    double x, y, distance;
    scanf("%lf %lf", &x, &y);
    distance = sqrt(x*x + y*y);
    printf("%s\n", x > 0 && distance >= 3 && distance <= 6 ? "Да" : "Нет");
    return 0;
}
