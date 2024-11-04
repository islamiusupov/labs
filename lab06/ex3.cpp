#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите размер матрицы n: ";
    cin >> n;

    int** A = new int*[n];
    for (int i = 0; i < n; ++i) {
        A[i] = new int[n];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    // 1) 
    int* zeroCount = new int[n](); 
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (A[i][j] == 0) {
                zeroCount[j]++;
            }
        }
    }

    cout << "Количество нулевых элементов в каждом столбце: ";
    for (int j = 0; j < n; ++j) {
        cout << zeroCount[j] << " ";
    }
    cout << endl;

    // 2)
    int diagProduct = 1;
    for (int i = 0; i < n; ++i) {
        diagProduct *= A[i][n - 1 - i];
    }
    cout << "Произведение элементов побочной диагонали: " << diagProduct << endl;

    // 3)
    int positiveCount = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) { 
            if (A[i][j] > 0) {
                positiveCount++;
            }
        }
    }
    cout << "Количество положительных элементов над главной диагональю: " << positiveCount << endl;

    delete[] zeroCount;
    for (int i = 0; i < n; ++i) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
