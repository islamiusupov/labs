#include <cstdio>
int main() {
    int number1, number2;
    printf("Two integers separeted by space\n");
    scanf("%d\n", &number1);
    scanf("%d\n", &number2);
    printf("%d\n", number1 % 10 + number2 % 10);
    return 0;
}