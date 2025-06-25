#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  that prints the sum of the two diagonals of a square matrix of integers
 * @a: two diagonals of a square matrix
 * @size: size of matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];

		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}
