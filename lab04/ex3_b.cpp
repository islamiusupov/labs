#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int n = 7;
    int x[n], y[n];
    int result[2 * n];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 20;
        y[i] = rand() % 20;
    }

    for (int i = 0, j = n - 1, k = 0; i < n; i++) {
        result[k++] = x[j];
        result[k++] = y[i] + (j > 0 ? x[j - 1] : 0);
        j--;
    }

    cout << "Новый массив из 2n элементов: ";
    for (int i = 0; i < 2 * n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
