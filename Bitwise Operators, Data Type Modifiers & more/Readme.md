# Bitwise Operators in C++

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

# Operator Precedence

<img width="420" alt="Screenshot 2024-10-15 230119" src="https://github.com/user-attachments/assets/73eb6d57-9bb3-43f8-a0a5-d6135d664180">



