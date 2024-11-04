#include <cstdio>
int main() {
    double temperature_in_celcius;
    scanf("%lf", &temperature_in_celcius);
    printf("%f\n", (9.0f / 5.0f) * temperature_in_celcius + 32);
    return 0;
}