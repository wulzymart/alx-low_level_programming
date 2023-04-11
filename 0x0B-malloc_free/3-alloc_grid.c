#include "main.h"
#include <stdlib.h>

/**
 * fill_grid - fills a grid of integers with 0
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void fill_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);
	h = malloc(sizeof(h) * height);
	if (h == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(h + i) = malloc(sizeof(int) * width);
		if ((h + i) == NULL)
		{
			while (i >= 0)
			{
				free((h + i));
				i--;
			}
			return (NULL);
		}
	}

	fill_grid(h, width, height);

	return (h);
}
