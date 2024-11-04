#include <iostream>
using namespace std;


int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int result = ((a + b +c ) % 2 == 0) ? min(b, c) : (a + b, a * b * c);
    cout << result;
    return 0;
}