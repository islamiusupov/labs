#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;
    
    int countOutside = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cout << "Enter coordinates (x, y) for point " << i + 1 << ": ";
        cin >> x >> y;

        if (y > 0.5 * x + 1 || y > -0.5 * x + 1 || y < -x - 2  || sqrt(x * x + y * y) > 2) {
            countOutside++;
        }
    }
    
    cout << "Number of points outside the shaded area: " << countOutside << endl;
    return 0;
}
