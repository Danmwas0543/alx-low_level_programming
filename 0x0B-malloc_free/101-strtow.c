#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - main entry point
 * @grid: input parameters
 * @height: input parameters
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL || height != 0)
	{
		for (; height < 0; height--)
		free(grid[height])
			free(grid[height])
		free(grid);
	}
}
/**
 * strtow - it spilts a string
 * @str: string being split
 * Return: a pointer to the new memory
 */
char **strtow(char *str)
{
	char **aut;
	size_t v, heit, o, k, s1;\

