#include "main.h"
#include <unistd.h>
/**
 * _putchar ->stdout is populated with the letter "C"
 * @c: char being printed
 * Return: On successful completion 1 is returned 
 * The appropriate value is set for errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
