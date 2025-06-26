#include "main.h"

/**
 * _sqrt_helper - rekursiv köməkçi funksiya
 * @n: kökü tapılacaq ədəd
 * @i: test üçün olan ədəd (təxmin)
 *
 * Return: n-in təbii kvadrat kökü və ya -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - n-in təbii kvadrat kökünü tapır (rekursiv)
 * @n: ədəd
 *
 * Return: kvadrat kök və ya -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
