#include "main.h"
/**
 * _puts -> function outputs a text to stdout
 * @str: text being print
 * _putchar: adds a line a new one
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
