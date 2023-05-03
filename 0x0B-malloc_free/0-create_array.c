#include "main.h"
#include <stdlib.h>
/**
 * create_array - make an array of size size,then give it the value c
 * @size: array size
 * @c: char being allocated
 * Return: array pointer; if failure, NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int b;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		
		return (NULL);
		

		
	for (b = 0; b < size; b++)
		
		s[b] = c;
		
	return (s);
		
}
