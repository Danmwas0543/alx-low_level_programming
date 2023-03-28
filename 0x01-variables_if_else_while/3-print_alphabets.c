#include <stdio.h>
/**
 * main - prints alphabet in upper and lower
 * Return: 0 zero
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);

	putchar('\n');
	return (0);
}
