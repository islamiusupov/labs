#include <iostream>
#include <cmath>   

int main() {
    double x, y;

    for (x = -1.5; x <= 1.5; x += 0.25) {
        if (x > 1) {
            y = 1 + sqrt(fabs(cos(x)));  
        } else if (x >= -0.5 && x <= 1) {
            y = x + 1;
        } else { 
            y = 1 - x * x;
        }

        std::cout << "x = " << x << " -> y = " << y << std::endl;
    }

    return 0;
}
