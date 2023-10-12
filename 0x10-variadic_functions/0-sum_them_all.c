#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all ->gives back the total of its parameters.
 *  @n: the quantity of parameters that were supplied to the method.
 * @...: a changeable quantity of parameters to add up.
 * Return: if n is zero return nill otherwise
 * the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
