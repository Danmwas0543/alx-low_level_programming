#include "main.h"
/**
 * _strncpy -> a function that duplicates text
 * @dest: first entered value
 * @src: second entered value
 * @n: third entered value
 * Return: dest (first entered value)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f = 0;

	while (f < n && src[f] != '\0')
	{
		dest[f] = src(f);
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}
