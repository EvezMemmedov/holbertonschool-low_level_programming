#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - nitializes it with a specific char.
 * @size: size of array
 * @c: char
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
