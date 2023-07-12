#include "main.h"
/**
 *_memset -> Populating a segment of memory with a certain value
 * @s: first address being populated
 * @b: the expected value
 * @n: bytes being modified
 * Return: new bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
