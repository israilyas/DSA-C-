# C++ Basics: Notes on Variables, Data Types, and Output

This document explains the structure and execution of a basic C++ program that handles variables, data types, and output.

## 1. Preprocessor Directive
- **`#include <iostream>`**: This is a preprocessor directive that tells the compiler to include the standard input-output stream library. This library provides the `cout` object, which is used for output operations.

## 2. Main Function
- **`int main()`**: Every C++ program starts its execution from the `main()` function. It returns an integer value, typically `0` at the end of the function, which indicates successful execution.

## 3. Variable Declarations
- Variables are containers that hold data. Here, multiple variables of different data types are declared and initialized:
  - **int age**: Stores an integer value (e.g., age of a person). It takes 4 bytes of memory.
  - **char grade**: Holds a single character (e.g., 'A'). Characters are stored as ASCII values and use 1 byte of memory.
  - **float PI**: Stores a floating-point value (e.g., 3.14). It takes 4 bytes in memory.
  - **bool isSafe**: Stores a Boolean value (`true` or `false`). It occupies 1 byte in memory.
  - **double price**: A double-precision floating-point number that takes 8 bytes, providing more precision than `float`.

## 4. Console Output
- **`cout`**: This is used to print values to the console. It sends data to the standard output device (usually the screen).
  - Different variables (e.g., age, PI, isSafe) are printed using `cout`.
  - The **`endl`** manipulator is used to add a new line, similar to `\n`.

## 5. `sizeof()` Operator
- The **`sizeof()`** operator is used to determine the size of a data type or variable in bytes. For example, `sizeof(age)` gives the size of the `int` variable `age`.

## 6. String and Character Output
- Various ways of printing text are demonstrated:
  - Directly outputting a string using `cout`.
  - Using escape characters like `\n` for new lines and `endl` for a line break.

## 7. Statement Terminator
- Every statement in C++ ends with a semicolon (`;`). This is mandatory and tells the compiler that the instruction is complete.

---

## Compilation & Execution Steps

### 1. **Compile the Code**
- The first step in running a C++ program is compiling it. The `g++` compiler is used to convert the code into an executable file.
  - **Windows**: Compiling the file generates a `.exe` file.
  - **Mac/Linux**: It generates an `.out` file.

### 2. **Run the Executable**
- Once compiled, the executable file can be run to see the output.

### 3. **Combine Both Steps**
- You can combine compilation and execution in one step with a single command for faster testing.

---

## Variables and Data Types

### Variables
- Variables store data that can be changed throughout the program. Some examples include:
  - **`int age = 25`**: Stores an integer value.
  - **`char grade = 'A'`**: Stores a single character. Single characters are enclosed in single quotes `' '`.
  - **`string name = "Isra"`**: A string (multiple characters) is enclosed in double quotes `" "`.

- **Naming Rules**:
  - A variable name can start with a letter (`a-z` or `A-Z`) or an underscore (`_`).
  - Variable names are case-sensitive and are also called **identifiers**.

### Data Types

1. **Primitive Data Types**:
   - **int**: Stores integers (non-decimal numbers), taking 4 bytes of memory.
   - **char**: Stores a single character, which is stored in memory using ASCII values, occupying 1 byte.
   - **float**: Stores floating-point numbers (e.g., 100.00), requiring 4 bytes of memory.
   - **bool**: Stores Boolean values (`true` or `false`), using 1 byte.
   - **double**: A double-precision floating-point number, using 8 bytes of memory for greater precision than `float`.

---

## Additional Notes

- **ASCII (American Standard Code for Information Interchange)**: Characters are stored in memory as their corresponding ASCII values. For example, the letter 'A' is stored as 65.
- **`sizeof()` Operator**: This operator can be used to determine the memory size (in bytes) that a particular variable or data type occupies.

---
