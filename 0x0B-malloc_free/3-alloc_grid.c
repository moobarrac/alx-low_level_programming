#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc
 * Description: each element of the grig should be initialised to 0
 * @w: int size width
 * @h: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int w, int h)
{
	int **grid;
	int i, j;

	if (w + h < 2 || w < 1 || h < 1)
		return (NULL);

	grid = malloc(h * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		grid[i] = malloc(w * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < w; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
