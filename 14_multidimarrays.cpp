#include <iostream>

int main() {
    // Declare a 2x3 array (2 rows, 3 columns)
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Access elements
    std::cout << "Element at [0][1]: " << matrix[0][1] << std::endl;  // Output: 2
    std::cout << "Element at [1][2]: " << matrix[1][2] << std::endl;  // Output: 6

    // Print the entire array using nested loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

// Key Points:
// 2D arrays are declared as int matrix[rows][columns];.
// You can access elements using two indices: matrix[row][column].