#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - uses malloc to set up memory
 * @b: amount of distributed bytes
 * Return: a reference to the memory space alloted
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);
	return (pt);
}
