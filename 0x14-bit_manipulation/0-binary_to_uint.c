#include "main.h"
/**
 * binary_to_uint - conversion of integers
 * from binary numbers
 *
 * @b: a string pointer which
 * contains binary numbers
 *
 * Return: the result of the converted
 * string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int leng, o, k, sammation, power;
	int bazzed;

	bazzed = 2;
	sammation = 0;
	power = 1;

	if (b == NULL)
		return (0);
	for (leng = 0; b[leng] != '\0'; leng++)
		;
	if (leng == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (o = 0; b[o] != '\0'; o++)
	{
		if (b[o] != '0' && b[o] != '1')
			return (0);
		for (k = leng - 1; k > 0; k--)
		power = power * bazzed;
		sammation = sammation + (power * (b[o] - 48));
		leng--;
		power = 1;
	}

	return (sammation);
}


