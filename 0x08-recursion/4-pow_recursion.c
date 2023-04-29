#include "main.h"

/**
 * _pow_recursion -> value of x raised to the power of y is going to be returned by this function
 * @x: value which is going to be raised
 * @y: power used
 *
 * Return: product of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
