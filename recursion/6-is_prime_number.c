#include "main.h"

/**
 * is_prime_helper - check number
 * @n: number
 * @i: dividing
 *
 * Return: 0, 1
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if  a prime number, return 0
 * @n: number
 *
 * Return: n
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
