#include <iostream>

int main() {
    int birth_day, birth_month, birth_year;
    int current_day, current_month, current_year;

    std::cout << "Введите день, месяц и год вашего рождения (через пробел): ";
    std::cin >> birth_day >> birth_month >> birth_year;

    std::cout << "Введите текущий день, месяц и год (через пробел): ";
    std::cin >> current_day >> current_month >> current_year;

    int age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    std::string age_word;
    if (age % 10 == 1 && age % 100 != 11) {
        age_word = "год";
    } else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20)) {
        age_word = "года";
    } else {
        age_word = "лет";
    }

    std::cout << "Вам " << age << " " << age_word << "." << std::endl;

    return 0;
}
