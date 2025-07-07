#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to print
 * @f: The function used to print the name
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned and errno is set.
 */
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
