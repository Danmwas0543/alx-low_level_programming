#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid - returns a pointer to an array
 * @width: array width
 * @height: array height
 * Return: array pointer
 */
int **alloc_grid(int width, int height)
{
	int o, k;
	int **griout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	griout = malloc(height * sizeof(int *));
	if (griout == NULL)
	{
		free(griout);
		return (NULL);
	}
	for (o = 0; o < height; o++)
	{
		griout[o] = malloc(width * sizeof(int));
		if (griout[o] == NULL)
		{
			for (o--; o >= 0; o--)
			free(griout[o]);
			free(griout);
			return (NULL);
		}

	}
	for (o = 0; o < height; o++)
		for (k = 0; k < width; k++)
			griout[o][k] = 0;
	return (griout);
}
