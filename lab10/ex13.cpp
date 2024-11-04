#include <iostream>

void selectionSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        std::swap(arr[i], arr[maxIndex]);
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSortDescending(arr, size);

    std::cout << "Массив, отсортированный по убыванию: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
