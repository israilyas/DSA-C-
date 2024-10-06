# C++ Concepts and Explanations

## If-Else Statements
- **Concept**: The `if-else` statement allows the program to execute certain blocks of code based on conditions. 
  - If the condition is `true`, the code within the `if` block executes.
  - If `false`, the `else` block (if present) executes.
- **Examples**:
  - Checking if a number is positive or negative.
  - Determining if a person is eligible to vote based on age.
  - Checking if a number is even or odd.

## If-Else If-Else
- **Concept**: The `if-else if-else` structure extends the basic `if-else` by allowing multiple conditions to be checked sequentially. The first true condition's block is executed, and the rest are ignored.
- **Example**: A grading system where different grade ranges (`A`, `B`, `C`, etc.) are checked based on marks.

## Character Case Check
- **Concept**: Characters in C++ are compared using their ASCII values. You can determine if a character is uppercase or lowercase by comparing it with its ASCII range.
  - Uppercase letters (A-Z) have ASCII values between 65 and 90.
  - Lowercase letters (a-z) have ASCII values between 97 and 122.

## Loops
### While Loop
- **Concept**: The `while` loop repeatedly executes a block of code as long as a condition is true. 
- **Example**: Printing numbers from 1 to 5 using a `while` loop.

### For Loop
- **Concept**: A `for` loop is used when the number of iterations is known beforehand. It includes initialization, condition, and update steps in one line.
- **Example**: Summing numbers or printing a range of numbers.

### Do-While Loop
- **Concept**: The `do-while` loop ensures that the code block executes at least once, as the condition is checked after the first iteration.
- **Example**: Printing numbers from 0 to 10 using a `do-while` loop.

### Infinite Loop
- **Concept**: A loop without an exit condition or with a condition that always evaluates to true, causing the program to continue running indefinitely.

## Nested Loops
- **Concept**: Loops inside loops are called nested loops. Outer loops control the number of rows, while inner loops control the number of columns.
- **Example**: Printing patterns like stars (`*`), where the outer loop handles the rows and the inner loop handles the number of stars per row.

## Prime Number Check
- **Concept**: A prime number is a number greater than 1 that has no divisors other than 1 and itself. By checking divisibility from 2 to the number minus 1, you can determine if a number is prime.
- **Optimization**: You can use a flag (like `isPrime`) to avoid redundant calculations once a divisor is found.

## Ternary Operator
- **Concept**: The ternary operator is a compact form of the `if-else` statement, used to evaluate conditions in a single line.
  - Syntax: `condition ? statement1 : statement2;`
  - If the condition is true, `statement1` is executed; otherwise, `statement2` is executed.
- **Example**: Checking if a number is positive or negative.

## Keywords
- **Concept**: Keywords are reserved words in C++ with special meanings for the compiler. They cannot be used as variable names (e.g., `int`, `while`, `for`, `break`).

## CamelCase Convention
- **Concept**: In programming, it is a common convention to write variable names in `camelCase`, where the first word is lowercase and subsequent words are capitalized (e.g., `firstName`, `totalSum`).

