#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A given name is printed using the provided function
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char * and returns nothing
 *
 * Description: This function takes a string (name) and a pointer to a
 * function `f` that handles the printing. If both `name` and `f` are
 * not NULL, it calls the function `f` with `name` as argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
