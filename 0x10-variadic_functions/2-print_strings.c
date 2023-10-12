#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -> publishes a new line after the strings.
 * @separator: Between strings this is the string that will be printed.
 * @n: how many strings were supplied to the function.
 * @...: The amount of strings that will be printed can vary.
 * Description: Printing is not done if the separator is NULL.
 * Should a string be NULL, (nil) is displayed in its place.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int indx;

	va_start(strings, n);

	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
