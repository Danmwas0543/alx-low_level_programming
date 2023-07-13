#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -> liberates a two-dimensional array
 * @grid: 2-dimensional array
 * @height: Dimension of grid's elevation
 * return: null
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
