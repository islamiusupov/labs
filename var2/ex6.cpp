#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double S = 0;
    int sum = 0;
    cout << "Введите целое число n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i; 
        S += sin(sum);
    }

    cout << "Результат серии S: " << S << endl;
    return 0;
}
