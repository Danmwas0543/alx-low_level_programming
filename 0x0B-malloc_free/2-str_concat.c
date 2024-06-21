#include "main.h"
#include "stdlib.h"
/**
 * str_concat - adds strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to the
 * string added together
 */
char *str_concat(char *s1, char *s2)
{
	size_t leng1, leng2, a, b;
	char *pt;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	leng1 = 0;
	while (s1[leng1] != '\0')
	{
		leng1++;
	}
	leng2 = 0;
	while (s2[leng2] != '\0')
	{
		leng2++;
	}
	pt = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (a = 0; a < leng1; a++)
	{
		pt[a] = s1[a];
	}
	for (b = 0; b <= leng2; b++)
	{
		pt[a] = s2[b];
	}
	return (pt);
}
