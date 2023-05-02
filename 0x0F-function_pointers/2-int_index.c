#include "function_pointers.h"
/**
 * int_index - if comparison is true return index place; otherwise, return -1
 * @array: a list
 * @size: the amount of array's components
 * @cmp: reference to one of the three major functions
 * Return: null
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
