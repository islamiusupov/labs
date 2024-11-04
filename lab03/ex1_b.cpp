#include <iostream>
#include <cmath> 

int main() {
    double x = 0.0;

    do {
        double y = log(x + 1) * sin(x); 

        std::cout << "x = " << x << ", f(x) = " << y << std::endl;

        x += 0.5;  
    } while (x <= 5.0);

    return 0;
}
