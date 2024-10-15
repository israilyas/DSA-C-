# Overview of Bitwise Operators, Scope, and Datatype Modifiers in C++

## Bitwise Operators in C++

Bitwise operators perform operations on the binary representations of numbers.

## Bitwise AND (`&`)
- The AND operator compares two bits and returns `1` if both bits are `1`; otherwise, it returns `0`.
  
| Bit 1 | Bit 2 | Result |
|-------|-------|--------|
|  0    |  0    |   0    |
|  0    |  1    |   0    |
|  1    |  0    |   0    |
|  1    |  1    |   1    |

Example:
- `a = 4 (100 in binary)`
- `b = 8 (1000 in binary)`
- Result: `100 & 1000 = 0000` (decimal `0`)

## Bitwise OR (`|`)
- The OR operator compares two bits and returns `1` if at least one of the bits is `1`; otherwise, it returns `0`.

| Bit 1 | Bit 2 | Result |
|-------|-------|--------|
|  0    |  0    |   0    |
|  0    |  1    |   1    |
|  1    |  0    |   1    |
|  1    |  1    |   1    |

Example:
- `a = 4 (100 in binary)`
- `b = 8 (1000 in binary)`
- Result: `100 | 1000 = 1100` (decimal `12`)

## Bitwise XOR (`^`)
- The XOR operator compares two bits and returns `1` if the bits are different; otherwise, it returns `0`.

| Bit 1 | Bit 2 | Result |
|-------|-------|--------|
|  0    |  0    |   0    |
|  0    |  1    |   1    |
|  1    |  0    |   1    |
|  1    |  1    |   0    |

Example:
- `a = 4 (100 in binary)`
- `b = 8 (1000 in binary)`
- Result: `100 ^ 1000 = 1100` (decimal `12`)

## Left Shift (`<<`)
- Shifting bits to the left effectively multiplies the number by `2^b`, where `b` is the number of positions shifted.

Example:
- `a << 1` results in `a * 2^1`.

## Right Shift (`>>`)
- Shifting bits to the right effectively divides the number by `2^b`, where `b` is the number of positions shifted.

Example:
- `a >> 1` results in `a / 2^1`.

### Additional Examples:
- `3 & 7 = 3` (binary: `011 & 111 = 011`)
- `3 | 7 = 7` (binary: `011 | 111 = 111`)
- `3 ^ 7 = 4` (binary: `011 ^ 111 = 100`)
  
---

## Operator Precedence

<img width="420" alt="Screenshot 2024-10-15 230119" src="https://github.com/user-attachments/assets/73eb6d57-9bb3-43f8-a0a5-d6135d664180">

---

# Scope
- Area where a variable can be accessed or used.

## Types of Scope

In programming, the **scope** of a variable determines where in the code it can be accessed or used. There are two main types of scope:

- **Local Scope**
- **Global Scope**

---

## Local Scope

A **local scope** refers to variables that are declared inside specific blocks of code. These variables are only accessible within that block and cannot be used outside of it. Examples of where local scope applies include:

- **If-else statements**: Variables declared inside an `if` or `else` block can only be used within that block.
  
- **Functions**: Any variable declared within a function is local to that function and can’t be accessed outside of it.

- **Code blocks**: Any variable declared within a pair of curly braces `{}` is limited to that block, such as inside loops or functions.

In summary, variables with local scope are confined to the block in which they are declared.

---

## Global Scope

A **global scope** refers to variables that are declared outside of all functions or blocks. These variables can be accessed from anywhere in the code, whether it's inside functions, blocks, or even different files (depending on the programming language).

In simpler terms, a global variable is available throughout the entire program, regardless of where it’s declared.

---

## Datatype Modifiers

**Datatype modifiers** are used to change the meaning or behavior of basic data types in C++. They can alter the range or the way the data is stored. Common datatype modifiers include `signed`, `unsigned`, `short`, and `long`. These modifiers are typically applied to integer and character types.

### Key Modifiers:

1. **Signed**:
   - By default, integer types are signed, meaning they can store both positive and negative values.
   - A signed integer reserves one bit (most significant bit, or MSB) to indicate the sign (positive or negative) of the number.
  
2. **Unsigned**:
   - An unsigned modifier removes the ability to store negative values, allowing only positive numbers and zero.
   - This effectively increases the range of positive numbers that can be stored because all the bits are used for the magnitude of the number (no sign bit).

   **Example**: An unsigned integer allows you to store larger positive values compared to a signed integer of the same size.

3. **Short**:
   - A short modifier reduces the storage size of an integer, typically using fewer bytes.
   - Useful when memory is limited and you only need to store small numbers.

4. **Long**:
   - A long modifier increases the storage size of an integer, allowing it to store larger values.
   - `long` and `long long` extend the range of integer data types by allocating more memory.

### Integer Data Types:
- **Signed Integer**: Can store both positive and negative numbers.
- **Unsigned Integer**: Stores only non-negative numbers (zero and positive values).

### Impact on Data Storage:
- The **number of bits** remains the same for both signed and unsigned types, but the **range** of values changes.
  - In signed integers, one bit is reserved to represent the sign (positive or negative).
  - In unsigned integers, all bits are used to represent positive values, which effectively doubles the range of positive numbers.

### Size of Datatypes:
- The size of an integer (or any modified integer type) depends on the specific modifier and can vary across systems (e.g., `short int`, `long int`, `long long int`).

### Important Notes:
- Declaring an **unsigned integer** and assigning a negative value (e.g., `unsigned int x = -10;`) can lead to unexpected behavior due to the absence of a sign bit.

