#include "main.h"

/**
 * clear_bit - modifies a specific bit of a number to 0
 *
 * @n: pointer to the number whose bit is to be changed
 * @index: position of the bit to modify
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mugo;

	mugo = 1;
	mugo = mugo << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mugo ^ *n;

	return (1);
}
