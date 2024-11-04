#include <iostream>

bool hasPositiveElements(const int arr[], int size) {
    if (size == 0) {
        return false; 
    }
    if (arr[size - 1] > 0) {
        return true; 
    }
    return hasPositiveElements(arr, size - 1); 
}

bool hasElementGreaterThan(const int arr[], int size, int value) {
    if (size == 0) {
        return false;
    }
    if (arr[size - 1] > value) {
        return true; 
    }
    return hasElementGreaterThan(arr, size - 1, value); 
}

bool hasNoElementsFromOtherArray(const int arr[], int size, const int otherArr[], int otherSize) {
    if (size == 0) {
        return true; 
    }
    for (int i = 0; i < otherSize; ++i) {
        if (arr[size - 1] == otherArr[i]) {
            return false;
        }
    }
    return hasNoElementsFromOtherArray(arr, size - 1, otherArr, otherSize); 
}

int main() {
    int arr[] = { -1, 0, 5, 7, -3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasPositiveElements(arr, size)) {
        std::cout << "Массив содержит положительные элементы.\n";
    } else {
        std::cout << "В массиве нет положительных элементов.\n";
    }

    int value = 6;
    if (hasElementGreaterThan(arr, size, value)) {
        std::cout << "В массиве есть элемент, больший " << value << ".\n";
    } else {
        std::cout << "В массиве нет элемента, большего " << value << ".\n";
    }

    int otherArr[] = { 5, -3 };
    int otherSize = sizeof(otherArr) / sizeof(otherArr[0]);
    if (hasNoElementsFromOtherArray(arr, size, otherArr, otherSize)) {
        std::cout << "В массиве нет элементов из другого массива.\n";
    } else {
        std::cout << "В массиве есть элементы из другого массива.\n";
    }

    return 0;
}
