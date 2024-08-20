#include <iostream>

// pass by value using just the var 
void modifyValue(int a) {
    a = 100;  // does not change  the original variable
}

// uncomment to try
// // Pass by reference using the & symbol
// void modifyValue(int &a) {
//     a = 100;  // This change affects the original variable
// }

int main() {
    int x = 5;
    modifyValue(x);
    std::cout << "x is now: " << x << std::endl;  // x is now 100
    return 0;
}
