#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int n = 7;
    int x[n], y[n];

    srand(static_cast<unsigned int>(time(0))); 
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 20;
        y[i] = rand() % 20;
    }

    cout << "Массив x: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "Массив y: ";
    for (int i = 0; i < n; i++) {
        cout << y[i] << " ";
    }
    cout << endl;

    return 0;
}
