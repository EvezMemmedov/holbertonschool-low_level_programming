#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of massiv
 * @height: height of massiv
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, x, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
                return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (s = 0; s < i; s++)
				free(grid[s]);
			free(grid);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
		{
			grid[j][x] = 0;
		}
	}

	return (grid);
}
