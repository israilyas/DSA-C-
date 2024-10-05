# C++ Basics: Notes on Variables, Data Types, and Output

This document explains the structure and execution of a basic C++ program that handles variables, data types, and output.

## Preprocessor Directive

- **`#include <iostream>`**: Includes the input-output stream library required for cout (output) and cin (input).

## Main Function

- **`int main()`**: Every C++ program starts its execution from the `main()` function. It returns an integer value, typically `0` at the end of the function, which indicates successful execution.

## Console Output
- **`cout`**: This is used to print values to the console. It sends data to the standard output device (usually the screen).
  - The **`endl`** manipulator is used to add a new line, similar to `\n`.

## `sizeof()` Operator
- The **`sizeof()`** operator is used to determine the size of a data type or variable in bytes. For example, `sizeof(age)` gives the size of the `int` variable `age`.

## Statement Terminator
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

## Types Casting

Type casting is converting data from one type to another.

1. **Type Conversion**:
   - This is done automatically by the compiler.
   - It usually happens when a small value is converted to a bigger type.
   - **Example**: 
     - A float (like `3.24`, which uses 4 bytes) can be converted to a double (which uses 8 bytes).
     - A char (1 byte) can be converted to an integer (4 bytes).

2. **Type Casting**:
   - This is done manually by the programmer.
   - It usually involves converting a larger type to a smaller one.
   - For instance, if you have `105.999` and convert it to an integer, it will be stored as `105` (the decimal part is discarded).

## Input in C++

To take input from the user, you can use:

```cpp
cin >> varName;
```cpp
---

# C++ Operators

## 1. Arithmetic Operators

These operators perform basic mathematical operations.

- `+`: Addition
- `-`: Subtraction
- `*`: Multiplication
- `/`: Division (Note: In C++, integer division returns an integer. Example: `5 / 2` gives `2`, not `2.5`.)
- `%`: Modulus (Returns the remainder. Example: `10 % 3` gives `1`.)

## 2. Relational Operators

These operators are used to compare two values and return a Boolean result (`true` or `false`).

- `<`: Less than (e.g., `3 < 5` is `true`).
- `<=`: Less than or equal to (e.g., `5 <= 5` is `true`).
- `>`: Greater than (e.g., `6 > 5` is `true`).
- `>=`: Greater than or equal to (e.g., `5 >= 3` is `true`).
- `==`: Equal to (e.g., `5 == 5` is `true`).
- `!=`: Not equal to (e.g., `3 != 5` is `true`).

## 3. Logical Operators

These operators are used to perform logical operations on Boolean values.

- `!`: NOT (Inverts the Boolean value. Example: `!true` is `false`.)
- `||`: OR (Returns `true` if at least one condition is `true`. Example: `(3 < 5 || 2 > 5)` is `true`.)
- `&&`: AND (Returns `true` if both conditions are `true`. Example: `(5 > 3 && 5 > 2)` is `true`.)

## 4. Unary Operators

These operators work with a single operand.

- `++`: Increment (Increases the value by 1. Example: `a++` increases `a` after it's used, `++a` increases `a` before it's used.)
- `--`: Decrement (Decreases the value by 1. Example: `a--` decreases `a` after it's used, `--a` decreases `a` before it's used.)

---

## Additional Notes

- **ASCII (American Standard Code for Information Interchange)**: Characters are stored in memory as their corresponding ASCII values. For example, the letter 'A' is stored as 65.
- **`sizeof()` Operator**: This operator can be used to determine the memory size (in bytes) that a particular variable or data type occupies.

---
