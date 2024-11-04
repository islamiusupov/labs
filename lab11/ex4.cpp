#include <iostream>
#include <string>
#include <unordered_map>

int romanToDecimal(const std::string &roman) {
    std::unordered_map<char, int> romanValues = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int decimal = 0;
    int prevValue = 0;

    for (int i = roman.size() - 1; i >= 0; --i) {
        char currentChar = roman[i];
        int currentValue = romanValues[currentChar];

        if (currentValue < prevValue) {
            decimal -= currentValue;
        } else {
            decimal += currentValue;
        }
        prevValue = currentValue;
    }

    return decimal;
}

int main() {
    std::string romanNumber;
    std::cout << "Введите римское число: ";
    std::cin >> romanNumber;

    int decimalNumber = romanToDecimal(romanNumber);
    std::cout << "Десятичное число: " << decimalNumber << std::endl;

    return 0;
}
лл