#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>


int main() {

    double cylinder_radius, cylinder_height;
    printf("Input cylinder radius value ");
    scanf("%lf", &cylinder_radius);
    printf("Input cylinder height value ");
    scanf("%lf", &cylinder_height);
    printf("V = %f\n", M_PI * cylinder_radius*cylinder_radius * cylinder_height);
    printf("S = %f", 2 * M_PI * cylinder_radius * (cylinder_radius + cylinder_height));
    return 0;
}