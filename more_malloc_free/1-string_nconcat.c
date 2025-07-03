#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - that concatenates two strings
 * @s1: first char
 * @s2: second char
 * @n: size
 *
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, x;
	char *ptr;
	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		j = n;

	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		ptr[x] = s1[x];
	for (x = 0; x < j; x++)
		ptr[x + i] = s2[x];
	ptr[i + j] = '\0';

	return (ptr);
}
