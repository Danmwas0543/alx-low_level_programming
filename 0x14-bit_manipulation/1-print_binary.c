#include "main.h"
/**
 * dan_faith - recursively prints the binary form of a number
 * @faith: the decimal input
 * Return: void
 */
void faith_mugo(unsigned long int faith)
{
	if (faith == 0)
		return;
	faith_mugo(faith >> 1);
	if ((faith & 1) == 1)
		_putchar('1');
	if ((faith & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - converts a decimal to binary and prints it
 * @dan: decimal to be converted
 */
void print_binary(unsigned long int dan)
{
	if (dan == 0)
		_putchar('0');
	else
	{
		faith_mugo(dan);
	}
}
