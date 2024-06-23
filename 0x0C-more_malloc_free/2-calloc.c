#include <stdlib.h>
#include "main.h"

/**
 * _memset -> gives storage a constant byte of data.
 * @s: memory space  being allocated
 * b: character being replicated
 * @n: how many instances to duplicate b
 * Return: reference to the storage space s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * _calloc-> allots space for an array in memory.
 * @nmemb: how many items are in the array
 * @size: dimension of every component in the array
 * Return: reference to the memomry
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pr = malloc(size * nmemb);

	if (pr == NULL)
		return (NULL);

	_memset(pr, 0, nmemb * size);

	return (pr);
}
