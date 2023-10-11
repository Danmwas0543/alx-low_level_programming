#include "main.h"
/**
 * _print_rev_recursion -> redirects the direction of a string's printing.
 * @s: displayed string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
