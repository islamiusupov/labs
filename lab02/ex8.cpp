#include <cmath>
#include <cstdio>

int main() {
    double x, y, distance;
    scanf("%lf %lf", &x, &y);
    distance = sqrt(x * x + y * y);
    if (distance <= 2.0f)
        printf("10\n");
    else if (distance <= 4.0f)
        printf("5\n");
    else
        printf("0\n");
    return 0;
}
