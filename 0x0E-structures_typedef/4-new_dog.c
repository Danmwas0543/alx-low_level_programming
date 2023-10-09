#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -> gives back a string's scale.
 * @b: string for assessment
 * Return: the string's whole span
 */
int _strlen(char *b)
{
	int j;

	j = 0;

	while (b[j] != '\0')
	{
		j++;
	}

	return (j);
}
/**
 * _strcpy -> replicates the string that src is pointing at.
 * as well as including the final null byte
 * to the buffer that dest has referenced
 * @dt: identifier of the buffer in which the string is copied
 * @sc: required string to be copied
 * Return: the destination pointer
 */
char *_strcpy(char *dt, char *sc)
{
	int ln, z;

	ln = 0;

	while (sc[ln] != '\0')
	{
		ln++;
	}

	for (z = 0; z < ln; z++)
	{
		dt[z] = sc[z];
	}
	dt[z] = '\0';

	return (dt);
}
/**
 * new_dog -> establishes a fresh new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the fresh canine (success), else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;
	int ln1, ln2;

	ln1 = _strlen(name);
	ln2 = _strlen(owner);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (ln1 + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dg->owner == NULL)
	{
		free(dg);
		free(dg->name);
		return (NULL);
	}
	_strcpy(dg->name, name);
	_strcpy(dg->owner, owner);
	dg->age = age;

	return (dg);
}
