#include "main.h"

/**
 * factorial -> gives a number's factorial
 * @n: the number used to get a factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
