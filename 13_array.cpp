#include <iostream>

int main() {
    // Declare an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access elements using index
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Last element: " << numbers[4] << std::endl;

    return 0;
}

// Key Points:
// Declaration: int numbers[5]; declares an array that can hold 5 integers.
// Initialization: You can initialize an array when you declare it, like int numbers[5] = {10, 20, 30, 40, 50};.
// Accessing Elements: Arrays are zero-indexed, meaning the first element is numbers[0], the second is numbers[1], and so on.