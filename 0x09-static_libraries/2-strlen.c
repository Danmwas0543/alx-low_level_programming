#include "main.h"
/**
 * _strlen -> A function that provides the size of the string.
 * @s: text being evaluated
 * Return: size of the string
 */
int _strlen(char *s)
{
	int sze = 0;

	while (*s != '\0')
	{
		sze++;
		s++;
	}
	return (sze);
}
