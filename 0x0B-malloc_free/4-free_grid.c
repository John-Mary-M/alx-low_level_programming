#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int y;

	if (height <= 0)
		return;
	if (grid == NULL)
		return;

	/* free entire grid*/
	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}

	free(grid);
}
