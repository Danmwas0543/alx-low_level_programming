#include "main.h"
#include "stdlib.h"
/**
 * free_grid - free an array
 * @grid: an array of an integer type
 * @height: the grid height
 * Return - none
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
