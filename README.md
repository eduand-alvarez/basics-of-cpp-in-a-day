# C++ Learning Repository

This repository documents my learning journey through C++ programming, covering fundamental concepts to more advanced topics. Below are the lessons and key concepts explored throughout this journey.

## Table of Contents

1. [Introduction to C++ Basics](#1-introduction-to-c-basics)
2. [Variables and Data Types](#2-variables-and-data-types)
3. [Control Flow: If, Else, and Switch](#3-control-flow-if-else-and-switch)
4. [Loops in C++: For, While, and Do-While](#4-loops-in-c-for-while-and-do-while)
5. [Functions in C++](#5-functions-in-c)
6. [Arrays in C++](#6-arrays-in-c)
7. [Multi-Dimensional Arrays](#7-multi-dimensional-arrays)
8. [Pointers in C++](#8-pointers-in-c)
9. [Dynamic Memory Allocation](#9-dynamic-memory-allocation)
10. [Relationship Between Arrays and Pointers](#10-relationship-between-arrays-and-pointers)

---

## 1. Introduction to C++ Basics

C++ is a versatile and powerful programming language, building on C to provide more advanced features such as object-oriented programming, memory management, and low-level hardware access. It’s used extensively in system-level programming, game development, high-performance applications, and more.

### Key Features:
- **Compiled Language**: C++ is compiled into machine code using a compiler like GCC or Clang, which means it offers high performance but requires the extra step of compilation.
- **Low-Level Memory Control**: Unlike higher-level languages like Python or JavaScript, C++ allows direct memory manipulation through pointers and manual memory allocation and deallocation.
- **Supports Multiple Programming Paradigms**: C++ supports procedural programming, object-oriented programming (OOP), and generic programming, making it very flexible.

---

## 2. Variables and Data Types

C++ is a statically typed language, which means every variable must have a specific type, and that type determines the kind of data it can store. Each type also has a specific size and memory requirement.

### Common Data Types:
- **`int`**: Stores whole numbers. Typically 4 bytes in size and can represent both positive and negative integers.
- **`float`**: Used for floating-point numbers, allowing for representation of decimal values. It typically requires 4 bytes of memory.
- **`double`**: Similar to `float`, but with double the precision, meaning it can store larger or more precise decimal values.
- **`char`**: Used to store a single character. A `char` typically requires 1 byte of memory.
- **`bool`**: Stores a boolean value, either `true` (1) or `false` (0). Useful for logic and control flow.
- **`std::string`**: Not a primitive data type, but provided by the C++ Standard Library to represent sequences of characters. Requires the inclusion of the `<string>` header.

### Input and Output:
- **Output**: In C++, the `std::cout` stream is used to print data to the console. It’s part of the `iostream` library.
- **Input**: You can capture user input using the `std::cin` stream. For more complex input (like entire sentences), `std::getline()` is used to handle input with spaces.

---

## 3. Control Flow: If, Else, and Switch

Control flow in C++ allows programs to make decisions based on certain conditions. This is fundamental to enabling logic and branching in programs.

### If-Else Statements:
- **`if`**: The `if` statement evaluates a condition. If the condition is true, the block of code inside the `if` is executed.
- **`else if`**: Can be used to check multiple conditions. It is evaluated only if the previous `if` condition is false.
- **`else`**: If none of the `if` or `else if` conditions are true, the code in the `else` block is executed as a default.

### Switch Statements:
- The `switch` statement is often used for handling multiple cases of a single variable. It compares the value of a variable against multiple cases and executes the code for the matching case.
- `switch` is more efficient than chaining multiple `if-else` statements when dealing with a variable that has several possible constant values.

---

## 4. Loops in C++: For, While, and Do-While

Loops allow repetitive execution of a block of code, which is useful for tasks that require iteration, such as traversing arrays or handling repetitive tasks.

### For Loop:
- A `for` loop is used when the number of iterations is known in advance. It consists of three parts:
  - **Initialization**: Executed once at the beginning of the loop.
  - **Condition**: The loop runs as long as this condition remains true.
  - **Increment/Decrement**: Adjusts the loop variable at the end of each iteration.

### While Loop:
- The `while` loop executes a block of code as long as the given condition remains true. It’s useful for situations where the number of iterations is unknown and depends on user input or a dynamic condition.

### Do-While Loop:
- The `do-while` loop is similar to the `while` loop but guarantees that the block of code is executed at least once, even if the condition is false from the beginning.

---

## 5. Functions in C++

Functions allow code to be modular and reusable. In C++, a function can accept parameters, perform operations, and return a result. They are essential for organizing code and avoiding repetition.

### Key Concepts:
- **Return Type**: The type of value that the function will return, such as `int`, `double`, or `void` (for no return value).
- **Parameters**: Functions can take input parameters to perform operations on. These parameters can be passed by value (a copy of the argument) or by reference (modifying the original argument).
- **Return Statement**: The `return` keyword is used to return a value from the function. If the return type is not `void`, this is mandatory.

---

## 6. Arrays in C++

An array is a collection of elements of the same data type stored in contiguous memory locations. Arrays are very efficient because they allow fast access to elements using indexing.

### Key Points:
- Arrays are **zero-indexed**, meaning the first element is accessed with index 0.
- Arrays must have their size declared at the time of creation. This size is fixed for static arrays.
- You can access and modify individual elements in an array using square brackets (`[]`).

Arrays are useful for storing and working with multiple data points under one variable name, and they are often manipulated using loops to iterate over each element.

---

## 7. Multi-Dimensional Arrays

C++ supports multi-dimensional arrays, which are arrays of arrays. The most common example is a 2D array, which can represent matrices or grids.

### Example Structure:
- A **2D array** is declared as `int matrix[2][3];`, which represents 2 rows and 3 columns.
- Elements in a 2D array are accessed using two indices, one for the row and one for the column.

Multi-dimensional arrays can be extended to 3D arrays (or higher), which are useful in certain mathematical and scientific computations.

---

## 8. Pointers in C++

A pointer is a variable that stores the **memory address** of another variable. Pointers are one of the most powerful features of C++, enabling dynamic memory management, efficient array handling, and complex data structures.

### Key Concepts:
- **Declaration**: `int* ptr` declares a pointer to an integer.
- **Address-of Operator (`&`)**: This operator retrieves the memory address of a variable.
- **Dereferencing (`*`)**: The dereferencing operator is used to access the value at the memory address stored in the pointer.

Pointers are essential for working with dynamic memory, and they allow for efficient passing of large data structures (like arrays) to functions.

---

## 9. Dynamic Memory Allocation

C++ allows for memory to be dynamically allocated during runtime using pointers. This is particularly useful when you don’t know the size of an array or data structure in advance.

### Key Concepts:
- **`new` keyword**: Allocates memory on the heap for a given data type.
- **`delete` keyword**: Frees memory that was allocated with `new`. This prevents memory leaks, which occur when allocated memory is not properly freed.

Dynamic memory allocation is essential when dealing with large or variable-sized data structures, such as dynamic arrays, linked lists, and trees.

---

## 10. Relationship Between Arrays and Pointers

In C++, arrays and pointers are closely related:
- The name of an array acts as a pointer to its first element. For example, `arr` is equivalent to `&arr[0]`.
- You can use pointer arithmetic to traverse the elements of an array, such as `*(arr + i)` to access the ith element of an array.
- Pointers allow dynamic allocation of arrays, making it possible to create arrays whose size is determined during runtime.

Understanding this relationship is key to mastering how C++ handles memory and how to work with both static and dynamic data structures.

---

## Conclusion

This repository serves as a reference for learning fundamental and advanced C++ concepts, ranging from basic syntax and data types to pointers and dynamic memory management. As I continue learning C++, I will expand this document with new topics and deeper insights into the language.

Feel free to explore the code examples and exercises in this repository to gain a deeper understanding of C++!

---

## Citation

This content was created and authored by **Eduardo Alvarez** as part of a personal learning journey in C++. It is provided here for educational purposes and is freely available under an open-source license for further use and modification.
