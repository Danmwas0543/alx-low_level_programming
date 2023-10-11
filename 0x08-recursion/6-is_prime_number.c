#include "main.h"

int real_prime(int n, int b);

/**
 * is_prime_number ->declares whether or not an integer is a prime number
 * @n: integer being examined
 * Return: 1 on success whether number is prime
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime -> recursively determines if a given integer is prime
 * @n: integer being examined if its prime
 * @b: iterator
 * Return: if its prime return 1,otherwise return 0
 */
int real_prime(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);
	return (real_prime(n, b - 1));
}
