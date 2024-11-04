#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // a)
    int countS = 0, countLowerS = 0;
    for (char ch : input) {
        if (ch == 'S') {
            countS++;
        } else if (ch == 's') {
            countLowerS++;
        }
    }
    int totalS = countS + countLowerS;

    // b) 
    int digitCount = 0;
    for (char ch : input) {
        if (std::isdigit(ch)) {
            digitCount++;
        }
    }

    // c)
    int uppercaseCount = 0;
    for (char ch : input) {
        if (std::isupper(ch)) {
            uppercaseCount++;
        }
    }

    // d) 
    std::string modifiedString = input;
    for (char &ch : modifiedString) {
        if (std::isdigit(ch)) {
            ch = '5';
        } else if (std::islower(ch)) {
            ch = std::toupper(ch);
        }
    }
    const char* cStr = modifiedString.c_str();

    // e) 
    printf("Количество 'S': %d\nКоличество 's': %d\nОбщее количество 'S' и 's': %d\n"
           "Количество цифр: %d\nКоличество заглавных букв: %d\nПреобразованная строка: %s\n",
           countS, countLowerS, totalS, digitCount, uppercaseCount, cStr);

    return 0;
}
