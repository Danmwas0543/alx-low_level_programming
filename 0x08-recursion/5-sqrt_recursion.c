#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural  root of a no.
 * @n: number which the root is being found
 *
 * Return: the outcome of the root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - reiterates to identify the natural
 * root of a given no.
 * @n: number which calculates  sqaure root 
 * @i: counter
 *
 * Return: the resultant root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

