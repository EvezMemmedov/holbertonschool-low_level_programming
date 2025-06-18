#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (y = 0; y < i; y++)
			_putchar('#');
		_putchar('\n');
	}
}
