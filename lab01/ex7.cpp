#include <cstdio>
int main() {
    int seconds, minutes, hours;
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = seconds / 60;
    seconds %= 60;
    hours += minutes / 60;
    hours %= 24;
    minutes %= 60;
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}