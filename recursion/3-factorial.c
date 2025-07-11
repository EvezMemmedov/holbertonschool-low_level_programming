#include "main.h"
#include <unistd.h>

/**
 * factorial - returns the factorial of a given number
 * @n: factorial's number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
