# Holberton School - Low Level Programming Project

This repository contains solutions to the first 12 mandatory tasks (0 to 11) of the Low Level Programming project. Each task involves writing C functions or scripts that demonstrate understanding of loops, conditions, character checks, and printing.

## Project Overview

The project helps to master:

- Writing functions in C
- Using loops and conditions
- Character testing and manipulation
- Printing output with `_putchar`

---

## Task List

### 0. Print alphabet
**File:** `0-print_alphabet.c`  
Write a function that prints the alphabet in lowercase, followed by a new line.

### 1. Print alphabet using `_putchar`
**File:** `1-alphabet.c`  
Write a program that prints the alphabet using only `_putchar`.

### 2. Print 10 times the alphabet
**File:** `2-print_alphabet_x10.c`  
Write a function that prints the alphabet 10 times, each followed by a new line, using `_putchar` only twice.

### 3. Check for lowercase character
**File:** `3-islower.c`  
Write a function that checks if a character is lowercase. Return 1 if true, 0 otherwise.

### 4. Check for alphabetic character
**File:** `4-isalpha.c`  
Write a function that checks if a character is alphabetic (uppercase or lowercase). Return 1 if true, 0 otherwise.

### 5. Print sign of a number
**File:** `5-sign.c`  
Write a function that prints the sign of a number and returns 1 if positive, 0 if zero, and -1 if negative.

### 6. Compute absolute value
**File:** `6-abs.c`  
Write a function that returns the absolute value of an integer.

### 7. Print last digit of a number
**File:** `7-print_last_digit.c`  
Write a function that prints the last digit of a number and returns it.

### 8. Print every minute of the day
**File:** `8-jack_bauer.c`  
Write a function that prints every minute of the day from 00:00 to 23:59.

### 9. Print 9 times table
**File:** `9-times_table.c`  
Write a function that prints the 9 times multiplication table, starting with 0.

### 10. Add two integers
**File:** `10-add.c`  
Write a function that adds two integers and returns the result.

### 11. Print all natural numbers from n to 98
**File:** `11-print_to_98.c`  
Write a function that prints all natural numbers from n to 98, separated by commas.

---

## Compilation and Testing

To compile and test your files, use:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c <task-file>.c -o <output-name>
./<output-name>
