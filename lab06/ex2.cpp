#include <iostream>
#include <limits> 
using namespace std;

int main() {
    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    double* arr = new double[n];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    // 1. 
    double sumPositives = 0;
    for (int i = 0; i < n; ++i) {
        if (*(arr + i) > 0) {
            sumPositives += *(arr + i);
        }
    }
    cout << "Сумма положительных элементов: " << sumPositives << endl;

    // 2. 
    double min1 = numeric_limits<double>::max();
    double min2 = numeric_limits<double>::max();
    for (int i = 0; i < n; ++i) {
        double current = *(arr + i);
        if (current < min1) {
            min2 = min1;
            min1 = current;
        } else if (current < min2 && current != min1) {
            min2 = current;
        }
    }
    if (min2 == numeric_limits<double>::max()) {
        cout << "Второго минимального элемента нет." << endl;
    } else {
        cout << "Второй минимум: " << min2 << endl;
    }

    // 3. 
    double* modifiedArr = new double[n];
    for (int i = 0; i < n; ++i) {
        if (*(arr + i) > 0) {
            *(modifiedArr + i) = *(arr + i) * 10;
        } else {
            *(modifiedArr + i) = *(arr + i) - 100;
        }
    }

    cout << "Новый массив: ";
    for (int i = 0; i < n; ++i) {
        cout << *(modifiedArr + i) << " ";
    }
    cout << endl;

    double dotProduct = 0;
    for (int i = 0; i < n; ++i) {
        dotProduct += *(arr + i) * *(modifiedArr + i);
    }
    cout << "Скалярное произведение исходного и нового массива: " << dotProduct << endl;

    delete[] arr;
    delete[] modifiedArr;

    return 0;
}
