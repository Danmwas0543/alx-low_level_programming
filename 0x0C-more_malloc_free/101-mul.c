#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit ->determines if a string includes a non-digit character
 * @s: the string to be assessed
 * Return: 0 success 1 when its failure
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strln -> gives back a string's size.
 * @s: the string to be assessed
 * Return: dimensions of the string evaluated in terms of length
 */
int _strln(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors -> takes care of main's errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main ->multiplies two non negative numbers
 * @argc:	various arguments
 * @argv:	a number of arguments
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int ln1, ln2, ln, j, carry, dg1, dg2, *rst, k = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	ln1 = _strlen(str1);
	ln2 = _strlen(str2);
	ln = ln1 + ln2 + 1;
	rst = malloc(sizeof(int) * ln);
	if (!rst)
		return (1);
	for (j = 0; j <= ln1 + ln2; j++)
		rst[j] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		dg1 = str1[ln1] - '0';
		carry = 0;
		for (ln2 = ln2 - 1; ln2 >= 0; ln2--)
		{
			dg2 = str2[ln2] - '0';
			carry += rst[ln1 + ln2 + 1] + (dg1 * dg2);
			rst[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			rst[ln1 + ln2 + 1] += carry;
	}
	for (j = 0; j < ln - 1; j++)
	{
		if (rst[j])
			k = 1;
		if (k)
			_putchar(rst[j] + '0');
	}
	if (!k)
		_putchar('0');
	_putchar('\n');
	free(rst);
	return (0);
}
