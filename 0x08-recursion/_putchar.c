#include "main.h"
#include <unistd.h>
/**
 * _putchar -> displays c(char) to standard output
 * @c: the char being displayed to stdout
 * Return: 1 when succesful
 * Errors result in a return of -1 and the corresponding setting of errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
