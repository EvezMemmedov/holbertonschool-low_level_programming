#include "main.h"

/**
 * _strcat - that concatenates two strings.
 *  @dest: destination string
 *  @src: source string
 *
 *  Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
