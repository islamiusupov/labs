#include <iostream>
#include <cmath>

int findMin(const int arr[], int size) {
    return arr[0];
}

int sumOfNegativeElements(const int arr[], int size) {
    int left = 0, right = size - 1;
    int pos = size; 
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= 0) {
            pos = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < pos; ++i) {
        sum += arr[i];
    }
    return sum;
}

int productOfElementsWithSquareLessThanW(const int arr[], int size, int W) {
    int product = 1;
    bool found = false; 

    for (int i = 0; i < size; ++i) {
        if (arr[i] * arr[i] < W) {
            product *= arr[i];
            found = true;
        } else {
            break; 
        }
    }

    return found ? product : 0;
}

int main() {
    int arr[] = {-9, -5, -3, 0, 1, 4, 7, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int W = 50; 

    int minElement = findMin(arr, size);
    std::cout << "Минимальный элемент: " << minElement << std::endl;

    int sumNegatives = sumOfNegativeElements(arr, size);
    std::cout << "Сумма всех отрицательных элементов: " << sumNegatives << std::endl;

    int product = productOfElementsWithSquareLessThanW(arr, size, W);
    std::cout << "Произведение элементов, квадрат которых меньше " << W << ": " << product << std::endl;

    return 0;
}
