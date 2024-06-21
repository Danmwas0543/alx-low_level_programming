#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array
 * @c: where strings are kept
 * @size: input for the array size
 * Return: pointer to the char c
 */

char *create_array(unsigned int size, char c);
{
	size_t j;
	char *pt;

	if (size == 0)
	{
		return (Null);
	}
	pt = malloc(sizeof(char) * size);
	if (pt == Null)
	{
		return (Null);
	}

	for (j = 0; j < size; j++)
	{
		pt[j] = c;
	}
	return (pt);
}
