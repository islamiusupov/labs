#include <cstdio>

int main() {
    double x,z,a,b;
    scanf("%lf %lf %lf %lf", &x, &z, &a, &b);
    if (z <= a && x <= b) {
        printf("Да");
    }
    
    else {
        printf("Нет");
    }
}