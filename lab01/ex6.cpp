#include <cstdio>
int main() {
    int number;
    printf("Input number");
    scanf("%d\n", &number);
    printf("First digit of number\n");
    printf("%d\n", number /1000);
    printf("Last digit of number\n");
    printf("%d\n", number %10);


    return 0;
}