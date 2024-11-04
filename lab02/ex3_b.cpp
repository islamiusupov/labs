#include <cstdio>
#include <cmath>

int main() {
    double x;
    scanf("%lf\n", &x);
    if (-2 >= x) {
        printf(0);

    }

    if (-2 < x <= 10) {
        printf("%f\n", (x*x + 4*x - 5));
    }

    if (x == 1 || x == -5) {
        return NAN;
    }

    else {
        printf("%f\n", 1.0f / (x*x + 4*x - 5));
    }
}