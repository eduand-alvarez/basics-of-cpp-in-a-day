#include <iostream>
#include <string>  // Needed for string

int main() {
    int age = 25;
    double price = 19.99;
    char grade = 'A';
    bool is_student = true;
    std::string name = "Eduardo";

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Student: " << is_student << std::endl;

    return 0;
}

// C++ uses similar data types as other languages, but it gives you more control over the size and memory usage of these types.
// 
// Common Data Types:
// int: Stores integers (whole numbers).
// float: Stores floating-point numbers (decimals).
// double: Stores double-precision floating-point numbers.
// char: Stores single characters.
// bool: Stores boolean values (true or false).
// string: Stores sequences of characters (requires #include <string>).