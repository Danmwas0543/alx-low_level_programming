#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -> releases memory set aside for a dog structure.
 *  @b: structure of dog to liberate
 */
void free_dog(dog_t *b)
{
	if (b)
	{
		free(b->name);
		free(b->owner);
		free(b);
	}
}
