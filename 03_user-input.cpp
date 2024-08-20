#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // Get a line of input for the name

    std::cout << "Enter your age: ";
    std::cin >> age;  // Get an integer input for age

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}

// Key Differences:
// std::cin >>: This operator is used for basic input like integers (int), floating-point numbers (double), or single words (string). It stops reading input as soon as it encounters whitespace (such as a space, newline, or tab).
// 
// When you use std::cin >> age;, it reads an integer and stops when it finds a space or newline, making it perfect for simple data like numbers.
// std::getline: This function reads entire lines of text, including spaces, until it encounters a newline (\n). It is useful for reading multi-word input like full names or sentences.
// 
// When you use std::getline(std::cin, name);, it reads the entire line (including any spaces) and only stops when the user presses Enter.