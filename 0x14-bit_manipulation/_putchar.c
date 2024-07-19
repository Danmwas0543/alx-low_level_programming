#include <unistd.h>
/**
 * _putchar - displays a char to the standard ouput
 * @x: char being used
 * Return: on success 1
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
