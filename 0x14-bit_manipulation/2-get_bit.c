#include "main.h"

/**
 * get_bit - retrieves the value of a bit at a specific position
 * @mugo: the decimal number to check
 * @dan: the bit position to retrieve
 * Return: the bit value (0 or 1) or -1 if the position is out of range
 */
int get_bit(unsigned long int mugo, unsigned int dan)
{
	if (dan >= sizeof(unsigned long int) * 8)
	    return (-1);
	return ((mugo >> dan) & 1);
}
