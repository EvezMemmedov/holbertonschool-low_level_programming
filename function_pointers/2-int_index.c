#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  that searches for an integer.
 * @array: massiv
 * @size: size of array
 * @cmp: function
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
