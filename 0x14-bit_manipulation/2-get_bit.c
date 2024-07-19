#include "main.h"

/**
 * get_bit - retrieves the value of a bit at a specific position
 * @n: the decimal number to check
 * @index: the bit position to retrieve
 * Return: the bit value (0 or 1) or -1 if the position is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    return ((n >> index) & 1);
}
