#include <iostream>
#include <climits>

int findMaxElement(const int arr[], int size) {
    if (size == 1) {
        return arr[0]; 
    }
    int maxInRest = findMaxElement(arr, size - 1);
    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

int findSecondAfterMax(const int arr[], int size, int maxValue, int index = 0, int count = 0) {
    if (index >= size) {
        return INT_MIN; 
    }
    if (arr[index] == maxValue) {
        count++; 
    }
    if (count == 2) {
        return arr[index]; 
    }
    return findSecondAfterMax(arr, size, maxValue, index + 1, count);
}

int countMaxElements(const int arr[], int size, int maxValue) {
    if (size == 0) {
        return 0; 
    }
    int countInRest = countMaxElements(arr, size - 1, maxValue);
    return (arr[size - 1] == maxValue) ? countInRest + 1 : countInRest;
}

int main() {
    int arr[] = {3, 5, 1, 5, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMaxElement(arr, size);
    std::cout << "Максимальный элемент: " << maxElement << std::endl;

    int secondAfterMax = findSecondAfterMax(arr, size, maxElement);
    if (secondAfterMax != INT_MIN) {
        std::cout << "Второй элемент после максимального: " << secondAfterMax << std::endl;
    } else {
        std::cout << "Нет второго элемента после максимального.\n";
    }

    int countMax = countMaxElements(arr, size, maxElement);
    std::cout << "Количество элементов, равных максимальному: " << countMax << std::endl;

    return 0;
}
