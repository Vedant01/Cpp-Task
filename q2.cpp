#include <iostream>
#include <vector>

// Function to multiply two matrices
std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>>& matrix1,
                                               const std::vector<std::vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int rows2 = matrix2.size();
    int cols2 = matrix2[0].size();

    // Check if matrices are compatible for multiplication
    if (cols1 != rows2) {
        std::cerr << "Matrices are not compatible for multiplication." << std::endl;
        return std::vector<std::vector<int>>();  // Return an empty matrix
    }

    // Initialize the result matrix with zeros
    std::vector<std::vector<int>> result(rows1, std::vector<int>(cols2, 0));

    // Perform matrix multiplication
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

// Function to print a matrix
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input for the first matrix
    std::cout << "Enter the number of rows and columns for the first matrix: ";
    std::cin >> rows1 >> cols1;

    std::vector<std::vector<int>> matrix1(rows1, std::vector<int>(cols1));

    std::cout << "Enter the elements of the first matrix:" << std::endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    std::cout << "Enter the number of rows and columns for the second matrix: ";
    std::cin >> rows2 >> cols2;

    std::vector<std::vector<int>> matrix2(rows2, std::vector<int>(cols2));

    std::cout << "Enter the elements of the second matrix:" << std::endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    // Multiply matrices and print the result
    std::vector<std::vector<int>> result = multiplyMatrices(matrix1, matrix2);

    if (!result.empty()) {
        std::cout << "Resultant matrix after multiplication:" << std::endl;
        printMatrix(result);
    }

    return 0;
}
