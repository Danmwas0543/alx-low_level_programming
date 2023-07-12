#include "main.h"
/**
 * _strspn -> the access site
 * @s: entered data
 * @accept: second entered data
 * return: 0 on success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				f++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (f);
		}
		s++;
	}
	return (f);
}
