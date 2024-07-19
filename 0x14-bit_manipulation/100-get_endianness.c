#include "main.h"

/**
 * get_endianness - determines the byte order of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int value = 1;
	int byte_order;

	byte_order = (int) (((char *)&value)[0]);
	return (byte_order);
}
