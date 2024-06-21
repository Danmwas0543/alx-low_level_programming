#include  "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer which has
 * a duplicate string on a new
 * memory allocation
 * @str: string being duplicated
 * Return: pointer of the arrays in memory
 */
char *_strdup(char *str)
{
	size_t a, b;
	char *sq;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	sq = (char *)malloc(sizeof(char) * (a + 1));

	if (sq == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		sq[b] = str[b];
	}
	return (sq);
}
