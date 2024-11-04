#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string firstName, middleName, lastName;
    std::cout << "Введите имя: ";
    std::cin >> firstName;
    std::cout << "Введите фамилию: ";
    std::cin >> lastName;
    std::cout << "Введите отчество: ";
    std::cin >> middleName;

    // 1. 
    std::string fullName = lastName + " " + firstName + " " + middleName;


    // 2. 
    std::string initials = std::string(1, firstName[0]) + '.' + std::string(1, middleName[0]) + '.';

    // 3. 
    std::string lastNameInitials = lastName + " " + (char)std::toupper(firstName[0]) + "." + (char)std::toupper(middleName[0]) + ".";
    
    
    for (char& ch : lastNameInitials) {
        ch = std::toupper(ch);
    }

    
    std::cout << "Полное имя: " << fullName << std::endl;
    std::cout << "Инициалы: " << initials << std::endl;
    std::cout << "Фамилия и инициалы: " << lastNameInitials << std::endl;

    return 0;
}
