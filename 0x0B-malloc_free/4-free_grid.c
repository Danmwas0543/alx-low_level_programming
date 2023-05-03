#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		
/**
 *  free_grid - releases a two-dimensional array
 *  @grid: grid 2d
 *  @height: size of the grid's height
 *  Return: void
 */
void free_grid(int **grid, int height)

{

	int b;

	for (b = 0; b < height; b++)

	{

		free(grid[b]);

	}

	free(grid);
}
