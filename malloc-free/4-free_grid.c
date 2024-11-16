#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid
 * @grid: The 2D array to be freed
 * @height: The height of the grid
 * This function frees the memory allocated for a 2D integer array,
 * including each row and the array of pointers.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
