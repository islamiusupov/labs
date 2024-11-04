#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int n = 7;
    int x[n], y[n];
    int result[3 * n];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 20;
        y[i] = rand() % 20;
    }

    for (int i = 0, j = 0; i < n; i++) {
        result[j++] = x[i];
        result[j++] = y[i];
        result[j++] = y[i] + x[i];
    }

    cout << "Новый массив из 3n элементов: ";
    for (int i = 0; i < 3 * n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
