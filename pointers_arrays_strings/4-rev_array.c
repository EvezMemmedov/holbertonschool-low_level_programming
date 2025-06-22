#include "main.h"

/**
 * reverse_array - that reverses the content of an array of integers.
 * @a: massiv.
 * @n: element sayi.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
