#include "main.h"

/**
 * char *_strcpy -> a method that duplicates text referenced by src
 * @dest: location of the stored copied text
 * @src: location where to duplicate the text from
 * Return: text
 */
char *_strcpy(char *dest, char *src)
{
	int f = 0;
	int g = 0;

	while (*(src + f) != '\0')
	{
		f++;
	}
	for ( ; g < f ; g++)
	{
		dest[g] = src[g];
	}
	dest[f] = '\0';
	return (dest);
}
