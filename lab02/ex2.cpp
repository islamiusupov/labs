#include <cstdio>
int main() {
    int number;
    scanf("%d", number);
    printf("%s\n", number == 0 ? "Нуль" : number > 0 ? "Положительное" : "Отрицательное.");
    printf("%s\n", number % 2 ? "Нечетное" : "Четное");
    return 0;
}
