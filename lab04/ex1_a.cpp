#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Второй элемент: " << arr[1] << endl;
    cout << "Предпоследний элемент: " << arr[8] << endl;

    return 0;
}
