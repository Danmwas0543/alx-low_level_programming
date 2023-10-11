#include "main.h"
/**
 * _puts_recursion ->a type of function which is used similarly to puts function
 * @s: data input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
