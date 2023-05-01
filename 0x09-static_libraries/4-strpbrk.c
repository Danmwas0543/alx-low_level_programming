#include "main.h"
/**
 * _strpbrk -> point of entry
 * @s: input value
 * @accept: input value
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}
