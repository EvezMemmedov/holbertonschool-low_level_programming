#include "main.h"

/**
 * _strncat - that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: Specifies how many characters to add from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
