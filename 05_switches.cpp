#include <iostream>

int main() {
    int option;
    std::cout << "Choose an option (1, 2, or 3): ";
    std::cin >> option;

    switch (option) {
        case 1:
            std::cout << "You chose option 1!" << std::endl; // std::endl in C++ is used to insert a newline character and flush the output buffer. It is part of the std (standard) namespace, and it stands for "end line."
            break;
        case 2:
            std::cout << "You chose option 2!" << std::endl;
            break;
        case 3:
            std::cout << "You chose option 3!" << std::endl;
            break;
        default:
            std::cout << "Invalid option!" << std::endl;
    }

    return 0;
}

// Key Points:
// switch checks the value of option and jumps to the corresponding case.
// break; is important because it stops execution at the end of a case. Without it, execution would "fall through" to the next case.
// The default case handles any value that doesn’t match the specified cases.