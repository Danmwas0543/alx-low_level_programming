#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - determines whether an integer is a prime number
 * @n: integer being checked
 * Return: on success returns 1,on failure 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual _prime(n, n-1));
}
/**
 * actual_prime -> evaluates a no. if its prime or not using recursion
 * @n: number being checked
 * @i: counter
 * Return: 1 on success(prime), 0 on failure(not prime)
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
