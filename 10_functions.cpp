#include <iostream>

int add(int a, int b) { //initializing the function
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;

    int sum = add(x, y);  // Calling the function
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}


// Key Points:
// Return Type (int): The type of value the function will return. In this case, add returns an int.
// Function Name (add): The name of the function that you will use to call it.
// Parameters (int a, int b): The inputs to the function, in this case, two integers a and b.
// Return Statement (return a + b;): This is where the function does its work and returns the result. Here, it adds the two numbers and returns the sum.