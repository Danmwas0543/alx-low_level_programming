#include <stdlib.h>
#include "main.h"

/**
 * array_range -> produces a collection of integers
 * @min: least storageable range of integers
 * @max: The largest possible storage range for integers
 * Return: identifier for the fresh array
 */
int *array_range(int min, int max)
{
	int *pt;
	int j, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	pt = malloc(sizeof(int) * sz);

	if (pt == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pt[j] = min++;

	return (pt);
}
