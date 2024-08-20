#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for an array
    int* arr = new int[size];

    // Populate the array
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;  // Assign values
    }

    // Print the array
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}

// Key Points:
// Dynamic arrays: You can allocate arrays at runtime using new int[size].
// delete[]: When freeing memory for arrays, use delete[] to deallocate the entire array.