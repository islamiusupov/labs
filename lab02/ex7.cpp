#include <cstdio>
#include <cstdlib>

int main() {
    double a, b, result;
    char math_operation;
    scanf("%lf %c %lf", &a, &math_operation, &b);
    switch (math_operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        default:
            exit(1);
    }
    printf("%f\n", result);
    return 0;
}
