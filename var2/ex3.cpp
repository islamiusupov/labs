#include <iostream>
using namespace std;
//#include <cmath>


int main() {
    double x;
    cin >> x;
    double y = x *  x* x * x* x* x - 3 * x * x * x * x * x + 2 *  x * x * x * x - x * x * x + 4 * x * x - 13 * x + 2;
    cout << y << endl;
    return 0;
}