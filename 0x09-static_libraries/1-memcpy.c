#include "main.h"
/**
 * _memcpy -> copies memory area
 * @dest: memory storage
 * @src: memory copied
 * @n: bytes
 * Return: copied memory and changed byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
