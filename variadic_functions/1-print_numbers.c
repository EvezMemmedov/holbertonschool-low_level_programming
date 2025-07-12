#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - that prints numbers, followed by a new line
 * @separator: string
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int number = va_arg(ap, int);

		printf("%d", number);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
 	}

	va_end(ap);
	printf("\n");
}
