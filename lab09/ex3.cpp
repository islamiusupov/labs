#include <iostream>
#include <cstdlib>  
#include <ctime>    

void fillMatrixWithRandomNumbers(int** matrix, int rows, int cols) {
    std::srand(std::time(nullptr));  
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = std::rand() % 100; 
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    std::cout << "Элементы матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;  
    }
}

void sumRows(int** matrix, int rows, int cols, int* sumArray) {
    for (int i = 0; i < rows; ++i) {
        sumArray[i] = 0; 
        for (int j = 0; j < cols; ++j) {
            sumArray[i] += matrix[i][j];  
        }
    }
}

int* minInColumns(int** matrix, int rows, int cols) {
    int* minArray = new int[cols];  
    for (int j = 0; j < cols; ++j) {
        minArray[j] = matrix[0][j]; 
        for (int i = 1; i < rows; ++i) {
            if (matrix[i][j] < minArray[j]) {
                minArray[j] = matrix[i][j];  
            }
        }
    }
    return minArray;  
}

int** multiplyMatrices(int** matrix1, int rows1, int cols1, int** matrix2, int rows2, int cols2) {
    if (cols1 != rows2) {
        std::cout << "Ошибка: матрицы не могут быть перемножены." << std::endl;
        return nullptr; 
    }

    int** resultMatrix = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        resultMatrix[i] = new int[cols2]; 
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            resultMatrix[i][j] = 0; 
            for (int k = 0; k < cols1; ++k) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];  
            }
        }
    }

    return resultMatrix;  
}

int main() {
    int rows, cols;

    std::cout << "Введите количество строк матрицы: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    fillMatrixWithRandomNumbers(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    int* sumArray = new int[rows];
    sumRows(matrix, rows, cols, sumArray);
    
    std::cout << "Суммы строк матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        std::cout << "Сумма строки " << i << ": " << sumArray[i] << std::endl;
    }

    int* minArray = minInColumns(matrix, rows, cols);
    
    std::cout << "Минимальные элементы столбцов:\n";
    for (int j = 0; j < cols; ++j) {
        std::cout << "Минимум столбца " << j << ": " << minArray[j] << std::endl;
    }

    int rows2, cols2;
    std::cout << "Введите количество строк второй матрицы: ";
    std::cin >> rows2;
    std::cout << "Введите количество столбцов второй матрицы: ";
    std::cin >> cols2;

    int** matrix2 = new int*[rows2];
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
    }

    fillMatrixWithRandomNumbers(matrix2, rows2, cols2);

    printMatrix(matrix2, rows2, cols2);

    int** productMatrix = multiplyMatrices(matrix, rows, cols, matrix2, rows2, cols2);

    if (productMatrix) {
        std::cout << "Произведение матриц:\n";
        printMatrix(productMatrix, rows, cols2);
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    delete[] sumArray;  
    delete[] minArray;  

    if (productMatrix) {
        for (int i = 0; i < rows; ++i) {
            delete[] productMatrix[i];
        }
        delete[] productMatrix;
    }

    return 0;
}
