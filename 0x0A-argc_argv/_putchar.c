include < stdio.h >
#include "main.h"

/**
 * _putchar - writes the char c to standard output
 * @c:the char to be printed
 * Return: 1 On success ,-1 is returned on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
