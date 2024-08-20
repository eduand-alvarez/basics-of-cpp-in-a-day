#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else if (age > 12) {
        std::cout << "You are a teenager." << std::endl;
    } else {
        std::cout << "You are a child." << std::endl;
    }

    return 0;
}

// Data flow explained
// 1. int age;
// What it does: This declares a variable named age of type int (integer).
// Purpose: It tells the compiler to reserve space in memory for an integer value and assigns the name age to that memory location.
// Type (int): C++ is a statically typed language, which means you must declare the type of each variable. In this case, age is an integer, meaning it can store whole numbers like 10, 25, -3, etc.
// 2. std::cout << "Enter your age: ";
// std::cout: This is the standard output stream in C++. It is used to display text on the console (output to the user).
// The std:: prefix indicates that cout belongs to the std (standard) namespace.
// << (Stream Insertion Operator): This is the stream insertion operator. It directs the string "Enter your age: " to std::cout, which outputs it to the console.
// "Enter your age: ": This is a string (a sequence of characters) that will be displayed in the console.
// Purpose: The line outputs a prompt to the user asking them to enter their age.
// 3. std::cin >> age;
// std::cin: This is the standard input stream in C++. It is used to get input from the user via the console.
// The std:: prefix indicates that cin belongs to the std (standard) namespace.
// >> (Stream Extraction Operator): This is the stream extraction operator. It takes the user input from std::cin and stores it in the variable age.
// age: This is the integer variable you declared earlier. The input the user provides will be stored in this variable.
// Purpose: This line waits for the user to input a value (their age) and assigns that value to the age variable.