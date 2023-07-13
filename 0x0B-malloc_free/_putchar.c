#include "main.h"
#include <unistd.h>
/**
 * _putchar -> outputs char c to standard output
 * @c: char being printed
 * Return: 1 when successful otherwise 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
