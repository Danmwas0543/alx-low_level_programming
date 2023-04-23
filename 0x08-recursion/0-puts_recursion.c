#include "main.h"
/**
 * _puts_recursion - this is a function to print string recursively
 * @s: string parameter
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
