#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated by alloc_grid
 * @grid: double pointer
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
