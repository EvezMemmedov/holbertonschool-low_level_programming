#include "main.h"
#include <stdlib.h>

/**
 * free_grid - that frees a 2 dimensional grid
 * @grid: massiv
 * @height: height of massiv
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
