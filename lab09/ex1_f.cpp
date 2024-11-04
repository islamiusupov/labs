#include <iostream>

void findElementOrNextGreater(const int arr[], int size, int target) {
    int closestGreater = -1;  
    bool found = false;       
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            found = true;
            std::cout << "Элемент " << target << " найден на индексе " << i << "." << std::endl;
            return;  
        } else if (arr[i] > target) {
            if (closestGreater == -1 || arr[i] < closestGreater) {
                closestGreater = arr[i];  
            }
        }
    }

    if (!found) {
        if (closestGreater != -1) {
            std::cout << "Элемент " << target << " не найден. Ближайший больший элемент: " << closestGreater << "." << std::endl;
        } else {
            std::cout << "Элемент " << target << " не найден и нет большего элемента." << std::endl;
        }
    }
}

int main() {
    const int size = 5;
    int arr[size];

    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Элемент " << i << ": ";
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Введите элемент для поиска: ";
    std::cin >> target;

    findElementOrNextGreater(arr, size, target);

    return 0;
}
