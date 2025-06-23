#include "main.h"

/**
 * _memset - that fills memory with a constant byte
 * @s: massiv
 * @b: the constant byte
 * @n: he memory area pointed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
