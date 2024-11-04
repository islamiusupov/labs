
#include <cstdio>
const double PI = 3.14159;


int main() {
    double sphere_radius;
    scanf("%lf", &sphere_radius);
    printf("Sphere volume");
    printf("%f\n", (4.0f / 3.0f) * PI * sphere_radius * sphere_radius);
    return 0;
}