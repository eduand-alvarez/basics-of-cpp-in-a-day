#include <iostream>

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int;

    // Assign a value to the allocated memory
    *ptr = 42;
    std::cout << "Dynamically allocated value: " << *ptr << std::endl;

    // Release the dynamically allocated memory
    delete ptr;

    return 0;
}

// Key Points:
// new: This allocates memory for a variable at runtime.
// delete: This frees the memory that was dynamically allocated. It’s important to always free memory when you're done with it to avoid memory leaks.