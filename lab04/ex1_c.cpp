#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    double average = sum / 10;
    cout << "Среднее арифметическое элементов массива: " << average << endl;

    return 0;
}
