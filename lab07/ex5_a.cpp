#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long result = 1; 
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int N, M;
    
    std::cout << "Введите число N: ";
    std::cin >> N;
    std::cout << "Введите число M: ";
    std::cin >> M;

    unsigned long long factorialN = factorial(N);
    unsigned long long factorialM = factorial(M);
    unsigned long long factorialSum = factorial(N + M);
    
    double result = static_cast<double>(factorialN * factorialM) / factorialSum;

    std::cout << "N! = " << factorialN << std::endl;
    std::cout << "M! = " << factorialM << std::endl;
    std::cout << "(N + M)! = " << factorialSum << std::endl;
    std::cout << "Результат N! * M! / (N + M)! = " << result << std::endl;

    return 0;
}
