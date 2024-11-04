#include <iostream>

int main() {
    int count = 0;       
    int evenCount = 0;   

    char choice;        

    do {
        int number;
        std::cout << "Введите целое число: ";
        std::cin >> number;

        count++; 

        if ((number % 2) == 0) {  // Если младший бит равен 0, то число чётное
            evenCount++;
        }

        std::cout << "Хотите ввести ещё одно число? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Общее количество введённых чисел: " << count << std::endl;
    std::cout << "Количество чётных чисел: " << evenCount << std::endl;

    return 0;
}
