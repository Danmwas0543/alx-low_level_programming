#include "main.h"

/**
 * set_bit - modifies a specific bit of a number to 1
 *
 * @n: pointer to the number whose bit is to be changed
 * @index: position of the bit to modify
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int faith;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	faith = 1;
	faith = faith << index;
	*n = ((*n) | faith);
	return (1);
}
