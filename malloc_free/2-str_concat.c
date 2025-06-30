#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat = malloc((i + j + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		concat[x] = s1[x];

	for (x = 0; x < j; x++)
		concat[i + x] = s2[x];

	concat[i + j] = '\0';

	return (concat);
}
