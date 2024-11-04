#include <iostream>

const int MAX_SIZE = 100;  
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    std::cout << "Введите элементы матрицы (" << rows << " x " << cols << "):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Элемент [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    std::cout << "Элементы матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;  
    }
}

void squareMatrix(int inputMatrix[MAX_SIZE][MAX_SIZE], int outputMatrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            outputMatrix[i][j] = inputMatrix[i][j] * inputMatrix[i][j];  
        }
    }
}

int main() {
    int rows, cols;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];       
    int squaredMatrix[MAX_SIZE][MAX_SIZE];  

    inputMatrix(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    squareMatrix(matrix, squaredMatrix, rows, cols);

    std::cout << "Матрица квадратов:\n";
    printMatrix(squaredMatrix, rows, cols);

    return 0;
}
