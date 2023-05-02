#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - displays every array component on a new line
 * @array: sequence
 * @size: no. of components to print
 * @action: pointer for standard or hexadecimal printing
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;

	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
