#include "main.h"
		
#include <unistd.h>
		
/**
		
 * _putchar - Writes the char c to standard output		
 * @c: the char to be printed	
 * Return: success 1.
		
 * On error, -1 is returned, and errno is set appropriately.
		
 */
		
int _putchar(char c)
		
{
		
	return (write(1, &c, 1));
		
}
