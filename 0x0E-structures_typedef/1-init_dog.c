#include <stdlib.h>
#include "dog.h"

/**
 * init_dog ->enables the initialization of a dog-struct variable.
 * @d: reference for initialising the struct dog
 * @name: initialise name
 * @age: initialise age
 * @owner: initialise owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
