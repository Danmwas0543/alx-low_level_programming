#include "main.h"
/**
 * _strlen_recursion -> reveals a string's length.
 * @s: the string under examination.
 * Return: how long the string is.
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}

	return (longi);
}
