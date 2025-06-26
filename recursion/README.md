# Recursion Project - Holberton School

This repository contains C programs that demonstrate the concept of **recursion** as part of the Holberton School's low-level programming curriculum.

## Description

Each task implements a recursive function solving a specific problem such as:
- Printing a string recursively
- Reversing a string
- Calculating the length of a string
- Calculating factorial
- Calculating power using recursion
- Calculating square root recursively
- Checking if a number is prime using recursion

## Files

| Filename               | Description                                          |
|------------------------|------------------------------------------------------|
| `0-puts_recursion.c`   | Prints a string followed by a new line using recursion |
| `1-print_rev_recursion.c` | Prints a string in reverse using recursion         |
| `2-strlen_recursion.c` | Returns the length of a string using recursion       |
| `3-factorial.c`        | Returns the factorial of a number                    |
| `4-pow_recursion.c`    | Returns the value of `x` raised to the power of `y`  |
| `5-sqrt_recursion.c`   | Returns the natural square root of a number          |
| `6-is_prime_number.c`  | Checks whether a number is a prime number            |
| `main.h`               | Header file containing function prototypes           |
| `_putchar.c`           | Custom implementation of the `putchar` function      |

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc
- Compilation will be done with:  
  `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- No global variables allowed
- Every function must have a prototype in `main.h`
- All code should follow the **Betty style**

## Compilation Example

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion

