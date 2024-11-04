#include <iostream>

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    // Рекуррентное соотношение: C(n, k) = C(n-1, k) + C(n-1, k-1)
    return binomialCoefficient(n - 1, k) + binomialCoefficient(n - 1, k - 1);
}

int main() {
    int n, k;
    std::cout << "Введите значения n и k: ";
    std::cin >> n >> k;

    int result = binomialCoefficient(n, k);
    std::cout << "Биномиальный коэффициент C(" << n << ", " << k << ") = " << result << std::endl;

    return 0;
}
