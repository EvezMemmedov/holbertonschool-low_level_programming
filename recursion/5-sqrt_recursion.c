#include "main.h"

/**
 * _sqrt_recursion -  natural square root of a number
 * @n: square root
 *
 * Return: i and -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	
	if (n < 0)
		return (-1);

	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (-1);
}
