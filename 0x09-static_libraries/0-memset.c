#include "main.h"
/**
 * _memset -> fills memory with a certain value
 * @s: first address of memory being filled
 * @b: the expected value
 * @n: no of bytes being changed
 * Return: changed array with value of the byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
