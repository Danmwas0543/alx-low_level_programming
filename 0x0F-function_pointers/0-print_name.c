#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name using the function pointer
 * @name: inserted string
 * @f: reference to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
