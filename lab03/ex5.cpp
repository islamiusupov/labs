#include <iostream>
#include <cmath>

int main() {
    double epsilon = 0.001;  
    double sum = 0.0;       
    double term;             
    int denominator = 1;    
    int sign = 1;           

    int termsCount = 0;    

    do {
        term = sign * (1.0 / denominator);  
        sum += term;                      
        sign = -sign;                       
        denominator += 2;                 
        termsCount++;                      
    } while (fabs(term) >= epsilon);     

    std::cout << "Приближённое значение суммы: " << sum << std::endl;
    std::cout << "Количество учтённых членов ряда: " << termsCount << std::endl;
    std::cout << "Ожидаемое значение (pi/4): " << M_PI / 4 << std::endl;

    return 0;
}
