#include <iostream>
#include <limits> 
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int a[rows][cols];

    cout << "Введите элементы массива размером 3x4:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Элемент [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int minElement = INT_MAX;
    int minRow = 0, minCol = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (a[i][j] < minElement) {
                minElement = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Наименьший элемент: " << minElement << endl;
    cout << "Его позиция: строка " << minRow << ", столбец " << minCol << endl;

    // б) 
    for (int i = 0; i < rows; ++i) {
        int temp = a[i][minCol];
        a[i][minCol] = a[i][cols - 1];
        a[i][cols - 1] = temp;
    }

    cout << "Массив после замены последнего столбца с минимальным столбцом:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // в) 
    int x[cols] = {0};

    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (a[i][j] > 0) {
                x[j] += a[i][j];
            }
        }
    }

    cout << "Одномерный массив x с суммами положительных элементов каждого столбца:" << endl;
    for (int j = 0; j < cols; ++j) {
        cout << x[j] << " ";
    }
    cout << endl;

    // г) 
    for (int j = 0; j < cols; ++j) {
        a[0][j] = minElement;
    }

    cout << "Массив после замены элементов первой строки на минимальный элемент:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
