#include "main.h"
/**
 * print_nary - using recursion to print binary number
 * @v: input
 * Return: none
 */
void print_nary(unsigned long int v)
{
	if (v == 0)
		return;
	print_nary(v >> 1);
	if ((v & 1) == 1)
		_putchar('1');
	if ((v & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - displays binary to standard output
 * @n: input
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_nary(n);
	}
}
