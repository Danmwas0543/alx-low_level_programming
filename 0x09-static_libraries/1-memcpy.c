#include "main.h"
/**
 * _memcpy -> a tool that duplicates a memory space
 * @dest: The location where it is kept
 * @src: space where a copy is made
 * @n: no of byte
 * Return: final copied mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int h = n;

	for (; f < h; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}
