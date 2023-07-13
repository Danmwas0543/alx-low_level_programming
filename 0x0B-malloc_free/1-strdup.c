#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -> copy in a fresh memory location
 * @str: character being duplicated
 * Return: null
 */
char *_strdup(char *str)
{
	char *f;
	int z, g = 0;

	if (str == NULL)
		return (NULL);
	z = 0;
	while (str[z] != '\0')
		z++;

	f = malloc(sizeof(char) * (z + 1));

	if (f == NULL)
		return (NULL);

	for (g = 0; str[g]; g++)
		f[g] = str[g];

	return (f);
}
