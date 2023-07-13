#include "main.h"
#include <stdlib.h>
/**
 * create_array -> make an array of capacity size, then give it the value c.
 * @size: The dimension of an array
 * @c: character being assigned the value
 * Return: arrays reference; if failure, Nil
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int f;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (f = 0; f < size; f++)
		s[f] = c;
	return (s);
}
