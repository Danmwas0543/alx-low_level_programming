#include <stdlib.h>
#include "main.h"
/**
 * _realloc - uses malloc and free to reassign a chunk of storage
 *  @ptr: reference to the space in memory that Malloc had previously alloted
 *  @old_size: size of the  pointer storage that was assigned
 *   @new_size: the freshly created storage block's capacity
 *   Return: address of the recently allocated storage segment
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1;
	char *old_pt;
	unsigned int j;

	if (new_size == old_size)
		return (pt);
	if (new_size == 0 && pt)
	{
		free(pt);
		return (NULL);
	}
	if (!pt)
		return (malloc(new_size));
	pt1 = malloc(new_size);
	if (!pt1)
		return (NULL);
	old_pt = pt;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			pt1[j] = old_pt[j];
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			pt1[] = old_pt[j];
	}
	free(pt);
	return (pt);
}
