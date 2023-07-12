#include "main.h"
/**
 * _strchr -> starting point
 * @s: first value entered
 * @c: second value entered
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}
