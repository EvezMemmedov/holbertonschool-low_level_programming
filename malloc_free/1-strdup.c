#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL
 */
char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	
	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}
