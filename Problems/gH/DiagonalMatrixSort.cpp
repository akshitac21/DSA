#include <iostream>
#include <vector>

std::vector<std::vector<int>> createDiagonalMatrix(int N) {
    std::vector<std::vector<int>> matrix(N, std::vector<int>(N, 0));
    int currentNum = 1;

    for (int i = 0; i < N; i++) {
        int row = i;
        int col = 0;
        while (row < N && col < N) {
            matrix[row][col] = currentNum;
            currentNum++;
            row++;
            col++;
        }
    }

    for (int j = 1; j < N; j++) {
        int row = 0;
        int col = j;
        while (row < N && col < N) {
            matrix[row][col] = currentNum;
            currentNum++;
            row++;
            col++;
        }
    }

    return matrix;
}

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Test with N = 3
    int N = 3;
    std::vector<std::vector<int>> matrix = createDiagonalMatrix(N);

    // Print the matrix
    printMatrix(matrix);

    return 0;
}
