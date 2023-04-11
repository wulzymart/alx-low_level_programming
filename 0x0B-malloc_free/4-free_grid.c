#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{

	while (height > 0)
	{
		free(grid[height - 1]);
		     height--;
	}
	free(grid);
}
