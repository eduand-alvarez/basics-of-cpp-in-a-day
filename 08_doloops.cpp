#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a positive number: "; // runs this part no matter what to receive the input. 
        std::cin >> number;
    } while (number <= 0);

    std::cout << "You entered: " << number << std::endl;

    return 0;
}

// A do-while loop is similar to a while loop, but it always runs at 
// least once, even if the condition is false initially.