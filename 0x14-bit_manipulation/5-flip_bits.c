#include "main.h"

/**
 * flip_bits - computes the number of bits needed to change
 * to convert one number into another
 *
 * @n: the first number to compare
 * @m: the second number to compare
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned long int bit_count;

	diff = n ^ m;
	bit_count = 0;
	while (diff > 0)
	{
		if ((diff & 1) == 1)
			bit_count++;
		diff = diff >> 1;
	}
	return (bit_count);
}
