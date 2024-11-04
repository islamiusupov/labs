#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // (a)
    int countEnding13 = 0;
    for (int num : numbers) {
        if (num % 100 == 13) {
            countEnding13++;
        }
    }

    // (b) 
    long long productDivisibleBy3 = 1;
    bool foundDivisibleBy3 = false;
    for (int num : numbers) {
        if (num % 3 == 0) {
            productDivisibleBy3 *= num;
        }
    }

    // (c) 
    int sumStarting44 = 0, countStarting44 = 0;
    for (int num : numbers) {
        if (num / 100 == 44) {
            sumStarting44 += num;
            countStarting44++;
        }
    }

    cout << "Колво на 13 " << countEnding13 << endl;
    cout << "Произведение кратных 3: " << productDivisibleBy3 << endl;
    cout << "Среднее арифметическое начинающихся на 44: " << (sumStarting44 / countStarting44) << endl;

    return 0;
}
