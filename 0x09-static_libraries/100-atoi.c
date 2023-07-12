#include "main.h"
/**
 * _atoi -> changes a text into numbers
 * @s: text being changed
 * Return: numbers
 */
int _atoi(char *s)
{
	int dan = 1, d = 0;
	unsigned int dex = 0;

	while (!(s[d] <= '9' && s[d] >= '0') && s[d] != '\0')
	{
		if (s[d] == '-')
			dan *= -1;
		d++;
	}
	while ((s[d] <= '9' && s[d] >= '0') && s[d] != '\0')
	{
		dex = (dex * 10) + (s[d] - '0');
		d++;
	}
	dex *= dan;
	return (dex);
}
