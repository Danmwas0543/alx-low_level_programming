#include "main.h"
/**
 * _puts_recursion - this is a function to print string recursively
 * @s: string parameter
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);
	s--;
	_putchar(*s);
}
