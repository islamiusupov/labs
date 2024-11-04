#include <iostream>

void inputArray(int* arr, int size) {
    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Элемент " << i << ": ";
        std::cin >> arr[i];
    }
}

void printArray(const int* arr, int size) {
    std::cout << "Элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
}

int scalarProduct(const int* arr1, const int* arr2, int size) {
    int product = 0;
    for (int i = 0; i < size; ++i) {
        product += arr1[i] * arr2[i];
    }
    return product;
}

void vectorAddition(const int* arr1, const int* arr2, int* result, int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int* scalarMultiplication(const int* arr, int size, int scalar) {
    int* result = new int[size];
    for (int i = 0; i < size; ++i) {
        result[i] = arr[i] * scalar;
    }
    return result; 
}

int main() {
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int automaticArray1[100];
    int automaticArray2[100];
    int automaticResult[100];

    inputArray(automaticArray1, size);
    inputArray(automaticArray2, size);

    printArray(automaticArray1, size);
    printArray(automaticArray2, size);

    int scalarProd = scalarProduct(automaticArray1, automaticArray2, size);
    std::cout << "Скалярное произведение: " << scalarProd << std::endl;

    vectorAddition(automaticArray1, automaticArray2, automaticResult, size);
    std::cout << "Результат сложения двух массивов:\n";
    printArray(automaticResult, size);

    int scalar;
    std::cout << "Введите скаляр для умножения: ";
    std::cin >> scalar;
    int* scalarResult = scalarMultiplication(automaticArray1, size, scalar);
    std::cout << "Результат умножения массива на скаляр:\n";
    printArray(scalarResult, size);

    delete[] scalarResult;

    return 0;
}
