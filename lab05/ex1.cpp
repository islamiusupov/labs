#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    const int rows = 2;
    const int cols = 3;
    int a[rows][cols];
    
    srand(time(0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] = rand() % 31; 
        }
    }

    // a) 
    cout << "Массив a:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // б) 
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += a[i][j];
        }
    }

    cout << "Сумма всех элементов: " << sum << endl;
    if (sum % 2 == 0) {
        cout << "Сумма всех элементов является чётным числом." << endl;
    } else {
        cout << "Сумма всех элементов является нечётным числом." << endl;
    }

    // в) 
    int range_sum = 0;
    int range_product = 1;
    bool has_range_elements = false; 

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (a[i][j] >= 2 && a[i][j] <= 9) {
                range_sum += a[i][j];
                range_product *= a[i][j];
                has_range_elements = true;
            }
        }
    }

    if (has_range_elements) {
        cout << "Сумма элементов в диапазоне [2, 9]: " << range_sum << endl;
        cout << "Произведение элементов в диапазоне [2, 9]: " << range_product << endl;
    } else {
        cout << "Элементы в диапазоне [2, 9] не найдены." << endl;
    }

    return 0;
}
