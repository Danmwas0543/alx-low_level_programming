#include "main.h"
/**
 * _strpbrk -> access site
 * @s: data entered
 * @accept: second data entered
 * return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
		if (*s == accept[f])
		return (s);
		}
	s++;
	}

return ('\0');
}
