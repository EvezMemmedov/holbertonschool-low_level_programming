#include "main.h"
#include <stdio.h>

/**
 * print_array -  that prints n elements of an array of integers.
 * @a: pointer to the integer array
 * @n: the number of elements of the array to be printed
 *
 * Return: Nothing(void)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
