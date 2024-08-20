#include <iostream>

int main() {
    int a = 10;      // Declare an integer variable
    int* ptr = &a;   // Declare a pointer to an integer and store the address of 'a'

    std::cout << "The value of a: " << a << std::endl;
    std::cout << "The address of a: " << &a << std::endl;
    std::cout << "The value stored in ptr (address of a): " << ptr << std::endl;
    std::cout << "The value pointed to by ptr: " << *ptr << std::endl;  // Dereferencing the pointer

    return 0;
}

// Key Points:
// Pointer Declaration (int* ptr): The * symbol indicates that ptr is a pointer to an integer.
// Address-of Operator (&): The & symbol gives the address of a variable. In this case, &a gives the memory address of a.
// Dereferencing (*ptr): The * operator dereferences the pointer, meaning it accesses the value stored at the memory address the pointer is pointing to.