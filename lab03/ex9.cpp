#include <iostream>
using namespace std;

int main() {
    int number, maxNumber = 0, maxCount = 0;

    cout << "Введите последовательность натуральных чисел, завершите ввод числом 0:" << endl;
    
    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number > maxNumber) {
            maxNumber = number;
            maxCount = 1;
        } else if (number == maxNumber) {
            maxCount++;  
        }
    }

    cout << "Количество элементов, равных наибольшему элементу (" << maxNumber << "): " << maxCount << endl;

    return 0;
}
