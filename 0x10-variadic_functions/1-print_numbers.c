#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -> publishes a new line after the numbers.
 * @separator: The text that will appear in between numbers.
 * @n: the quantity of integers that are given to the function.
 * @...: The number of numbers that will be printed varies.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nms;
	unsigned int index;

	va_start(nms, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nms, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nms);
}
