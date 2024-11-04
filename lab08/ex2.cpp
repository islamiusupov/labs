#include <iostream>
#include <cmath>
#include <string>

void findRoots(double a, double b, double c, double *root1, double *root2, std::string &message) {
    double discriminant = b * b - 4 * a * c; 

    if (discriminant > 0) {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        message = "Два действительных корня: ";
    } else if (discriminant == 0) {
        *root1 = *root2 = -b / (2 * a);
        message = "Один действительный корень: ";
    } else {
        message = "Действительных корней нет.";
        *root1 = *root2 = 0; 
    }
}

int main() {
    double a1 = 4, b1 = -5, c1 = 1;  
    double a2 = 13, b2 = 2, c2 = 5;  
    double a3 = 1, b3 = -4, c3 = 4; 

    double root1, root2;
    std::string message;

    findRoots(a1, b1, c1, &root1, &root2, message);
    std::cout << "Уравнение: " << a1 << "x^2 + " << b1 << "x + " << c1 << " = 0\n";
    std::cout << message;
    if (message.find("корень") != std::string::npos) {
        std::cout << root1 << std::endl;
    } else {
        std::cout << root1 << " и " << root2 << std::endl;
    }
    
    findRoots(a2, b2, c2, &root1, &root2, message);
    std::cout << "Уравнение: " << a2 << "x^2 + " << b2 << "x + " << c2 << " = 0\n";
    std::cout << message << std::endl;

    findRoots(a3, b3, c3, &root1, &root2, message);
    std::cout << "Уравнение: " << a3 << "x^2 + " << b3 << "x + " << c3 << " = 0\n";
    std::cout << message;
    if (message.find("корень") != std::string::npos) {
        std::cout << root1 << std::endl;
    } else {
        std::cout << root1 << " и " << root2 << std::endl;
    }

    return 0;
}
    