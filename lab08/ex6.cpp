#include <iostream>

bool isLuckyTicket(int ticketNumber) {
    // Проверяем, что число шестизначное
    if (ticketNumber < 100000 || ticketNumber > 999999) {
        std::cout << "Номер не шестизначный!" << std::endl;
        return false;
    }
    
    int sum1 = (ticketNumber / 100000) + (ticketNumber / 10000 % 10) + (ticketNumber / 1000 % 10);
    int sum2 = (ticketNumber / 100 % 10) + (ticketNumber / 10 % 10) + (ticketNumber % 10);
    
    return sum1 == sum2;
}

bool isLuckyTicket(int d1, int d2, int d3, int d4, int d5, int d6) {
    if (d1 < 0 || d1 > 9 || d2 < 0 || d2 > 9 || d3 < 0 || d3 > 9 || 
        d4 < 0 || d4 > 9 || d5 < 0 || d5 > 9 || d6 < 0 || d6 > 9) {
        std::cout << "Цифры должны быть от 0 до 9!" << std::endl;
        return false;
    }
    
    int sum1 = d1 + d2 + d3;
    int sum2 = d4 + d5 + d6;

    return sum1 == sum2;
}

bool isLuckyTicket(int firstHalf, int secondHalf) {
    if (firstHalf < 100 || firstHalf > 999 || secondHalf < 100 || secondHalf > 999) {
        std::cout << "Каждая половина должна быть трехзначной!" << std::endl;
        return false;
    }

    int sum1 = (firstHalf / 100) + (firstHalf / 10 % 10) + (firstHalf % 10);
    int sum2 = (secondHalf / 100) + (secondHalf / 10 % 10) + (secondHalf % 10);

    return sum1 == sum2;
}

int main() {
    int choice;
    std::cout << "Выберите способ проверки на счастливый билет:\n";
    std::cout << "1. Шестизначное число (целое)\n";
    std::cout << "2. Шесть отдельных цифр\n";
    std::cout << "3. Две трехзначные половины\n";
    std::cout << "Введите номер варианта: ";
    std::cin >> choice;

    if (choice == 1) {
        int ticketNumber;
        std::cout << "Введите шестизначный номер билета: ";
        std::cin >> ticketNumber;
        if (isLuckyTicket(ticketNumber)) {
            std::cout << "Билет счастливый!" << std::endl;
        } else {
            std::cout << "Билет не счастливый." << std::endl;
        }
    } else if (choice == 2) {
        int d1, d2, d3, d4, d5, d6;
        std::cout << "Введите шесть цифр: ";
        std::cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
        if (isLuckyTicket(d1, d2, d3, d4, d5, d6)) {
            std::cout << "Билет счастливый!" << std::endl;
        } else {
            std::cout << "Билет не счастливый." << std::endl;
        }
    } else if (choice == 3) {
        int firstHalf, secondHalf;
        std::cout << "Введите две трехзначные половины: ";
        std::cin >> firstHalf >> secondHalf;
        if (isLuckyTicket(firstHalf, secondHalf)) {
            std::cout << "Билет счастливый!" << std::endl;
        } else {
            std::cout << "Билет не счастливый." << std::endl;
        }
    } else {
        std::cout << "Некорректный выбор." << std::endl;
    }

    return 0;
}
