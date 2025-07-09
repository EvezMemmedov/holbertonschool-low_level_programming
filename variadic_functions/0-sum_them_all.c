#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - that returns the sum of all its parameters
 * @n: parametr
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	return (0);

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
