#include "main.h"

/**
 * _abs -> establishes an integer's true value
 * @n: integer being evaluated
 * Return: value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
