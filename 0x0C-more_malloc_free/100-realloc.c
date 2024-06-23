#include <stdlib.h>
#include "main.h"

/**
 *  _realloc ->uses malloc and free for redistributing a chunk of storage
 * @ptr: reference to the memory that Malloc previously allocated
 * @old_size: The amount of the storage capacity that was allotted to ptr.
 * @new_size: modified storage block size
 * Return: a reference to the recently allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1;
	char *old_pt;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pt1 = malloc(new_size);
	if (!pt1)
		return (NULL);

	old_pt = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			pt1[j] = old_pt[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			pt1[j] = old_pt[j];
	}

	free(ptr);
	return (pt1);
}
