#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -> allots storage space using malloc
 * @b: allotted amount of bytes
 * Return: a reference to the storage space allotted
 */
void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);

	if (pr == NULL)
		exit(98);

	return (pr);
}
