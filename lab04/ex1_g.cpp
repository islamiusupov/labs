#include <iostream>
using namespace std;

int main() {
    int arr1[10];
    int arr2[10] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};

    cout << "Введите 10 целых чисел для первого массива: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr1[i];
    }

    cout << "Суммы пар элементов (первый массив + второй массив):" << endl;
    for (int i = 0; i < 10; i++) {
        int sum = arr1[i] + arr2[i];
        cout << arr1[i] << " + (" << arr2[i] << ") = " << sum << endl;
    }

    return 0;
}
