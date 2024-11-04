#include <cstdio>


int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%s", x >= 0 && y >= 0 && y <=  (-2 * x + 2) ? "Да" : "Нет");
    return 0;
}
