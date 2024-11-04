#include <iostream>

void printSquare4x4() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

void printSquare(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

void printSquareWithIndent(int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << ' ';
        }
        for (int j = 0; j < n; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

void printChessBoard(int n, int m) {
    for (int row = 0; row < n; ++row) {
        for (int i = 0; i < m; ++i) {
            for (int col = 0; col < n; ++col) {
                if ((row + col) % 2 == 0) {
                    for (int j = 0; j < m; ++j) {
                        std::cout << '*'; 
                    }
                } else {
                    for (int j = 0; j < m; ++j) {
                        std::cout << ' '; 
                    }
                }
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    std::cout << "Квадрат 4x4:" << std::endl;
    printSquare4x4();

    std::cout << "\nКвадрат произвольного размера (n x n):" << std::endl;
    printSquare(6);  

    std::cout << "\nКвадрат с отступом (n x n с m отступом):" << std::endl;
    printSquareWithIndent(5, 3); 

    std::cout << "\nШахматная доска (n x n клеток с размером m x m):" << std::endl;
    printChessBoard(4, 4);  
    return 0;
}
