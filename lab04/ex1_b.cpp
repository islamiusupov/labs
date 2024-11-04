#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Элементы с нечетными индексами:" << endl;
    for (int i = 1; i < 10; i += 2) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
