#include <iostream>
using namespace std;

int main() {
    const int n = 8; 
    int fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    cout << "Первые " << n << " элементов последовательности Фибоначчи:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "f[" << i << "] = " << fibonacci[i] << endl;
    }

    return 0;
}
