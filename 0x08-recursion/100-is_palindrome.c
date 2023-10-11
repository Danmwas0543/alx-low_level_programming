#include "main.h"

int chck_pal(char *s, int b, int ln);
int _strln_recursion(char *s);
/**
 * is_palindrome ->determines a string's palindrome status
 * @s: the string being checked its palindrome status
 * Return: if its palindrome return 1
 * otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (chck_pal(s, 0, _strln_recursion(s)));
}
/**
 *  _strln_recursion ->yields the string's length
 * @s: the string whose length is being evaluated
 * Return: the size of the string in terms of lngth
 */
int _strln_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strln_recursion(s + 1));
}
/**
 * chck_pal ->looks for palindromes in string  recursively
 * @s: the string being examined
 * @b: iterator
 * @ln: string's size in lngth
 * Return: if its palindrome return 1
 * otherwise 0
 */
int chck_pal(char *s, int b, int ln)
{
	if (*(s + b) != *(s + ln - 1))
		return (0);
	if (b >= ln)
		return (1);
	return (chck_pal(s, b + 1, ln - 1));
}
