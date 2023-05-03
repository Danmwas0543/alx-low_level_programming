#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 *  is_digit - determines if a string includes a non-digit character
 *  @s: a phrase being examined
 *  Return: 1 if a digit is detected, 0 if not.
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - gives back a string's size.
 * @s: string being assessed
 * Return: the size of the string being assesed
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (a);
}
/**
 * errors - takes care of main errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - two values that are positive are multiplied.
 * @argc: various arguments
 * @argv: variety(array) of justifications
 *  Return:  0 for Success
 */
int main(int argc, char *argv[])
{
	char *t1, *t2;
	int ln1, ln2, ln, j, cary, dgt1, dgt2, *rslt, b = 0;

	t1 = argv[1], t2 = argv[2];
	if (argc != 3 || !is_dgt(t1) || !is_dgt(t2))
		errors();
	ln1 = _strlen(t1);
	ln2 = _strlen(t2);
	ln = ln1 + ln2 + 1;
	rslt = malloc(sizeof(int) * ln);
	if (!rslt)
		return (1);
	for (j = 0; j <= ln1 + ln2; j++)
		result[j] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		dgt1 = t1[ln1] - '0';
		cary = 0;
		for (ln2 = _strlen(t2) - 1; ln2 >= 0; ln2--)
		{
			dgt2 = t2[ln2] - '0';
			cary += rslt[ln1 + ln2 + 1] + (dgt1 * dgt2);
			rslt[ln1 + ln2 + 1] = cary % 10;
			cary /= 10;
		}
		if (cary > 0)
			rslt[ln1 + ln2 + 1] += cary;
	}
	for (j = 0; j < ln - 1; j++)
	{
		if (rslt[j])
			b = 1;
		if (b)
			_putchar(rslt[j] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}
