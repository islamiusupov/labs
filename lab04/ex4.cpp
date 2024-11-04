#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int w;

    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Введите число w: ";
    cin >> w;


    cout << "Найденные пары:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (arr[i] + arr[j] == w) {
                cout << "Элементы: " << arr[i] << " и " << arr[j];
                cout << ", Индексы: " << i << " и " << j << endl;
            }
        }
    }



    return 0;
}
