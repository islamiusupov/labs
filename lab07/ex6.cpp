#include <iostream>
#include <string>

char getSign(int number) {
    if (number > 0) {
        return '+'; 
    } else if (number < 0) {
        return '-';
        return '0'; 
    }
}

std::string numberToText(int number) {
    switch (number) {
        case 0: return "ноль";
        case 1: return "один";
        case 2: return "два";
        case 3: return "три";
        case 4: return "четыре";
        case 5: return "пять";
        case 6: return "шесть";
        case 7: return "семь";
        case 8: return "восемь";
        case 9: return "девять";
        case 10: return "десять";
        default: return "";
    }
}

int main() {
    int number;

    std::cout << "Введите число из интервала [-10, 10]: ";
    std::cin >> number;

    if (number < -10 || number > 10) {
        std::cout << "Ошибка: число должно быть в интервале [-10, 10]." << std::endl;
        return 1; 
    }

    std::cout << "Вы ввели: " << numberToText(number) << " (знак: " << getSign(number) << ")" << std::endl;

    return 0;
}
