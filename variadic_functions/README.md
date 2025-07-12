# 0x0F. Variadic functions

This project is part of the **Low-level programming** curriculum at Holberton School. It focuses on using **variadic functions** in C with the `stdarg.h` library.

---

## ✨ Learning Objectives

- What are variadic functions
- How to use `va_start`, `va_arg` and `va_end` macros
- Why and how to use `const` type qualifier

---

## 📁 Project Structure

Each file implements a different variadic function with specific behavior and constraints.

---

## 🔧 Files & Descriptions

| File | Description |
|------|-------------|
| `0-sum_them_all.c` | Returns the sum of all parameters. Returns `0` if `n == 0`. |
| `1-print_numbers.c` | Prints numbers separated by a given string and followed by a new line. |
| `2-print_strings.c` | Prints strings separated by a given string and followed by a new line. If a string is `NULL`, prints `(nil)`. |
| `3-print_all.c` | Prints any type of value based on a format string. Supports `c`, `i`, `f`, `s`. Ignores unknown types. |

---

## 📌 Function Prototypes

```c
/* 0-sum_them_all.c */
int sum_them_all(const unsigned int n, ...);

/* 1-print_numbers.c */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2-print_strings.c */
void print_strings(const char *separator, const unsigned int n, ...);

/* 3-print_all.c */
void print_all(const char * const format, ...);

