#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: the first occurrence in the string
 * @accept: the string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
