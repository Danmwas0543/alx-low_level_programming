#include "main.h"

int real_sqrt_recursion(int n, int b);

/**
 * _sqrt_recursion ->yields a number's natural square root
 * @n: the integer used to get the square root of
 * Return: square root that is obtained
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion ->uses recursive methods to 
 * determine a number's natural square root
 * @n: the integer used to get the square root of
 * @b: iterator
 * Return: square root that is obtained
 */
int real_sqrt_recursion(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (real_sqrt_recursion(n, b + 1));
}
