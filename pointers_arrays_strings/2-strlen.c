#include "main.h"

/**
 * _strlen - that returns the length of a string.
 * @s: - first
 * @i: - second
 *
 * return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return i;
}
