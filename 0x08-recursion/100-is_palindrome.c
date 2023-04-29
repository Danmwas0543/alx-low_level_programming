#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks for palindrome in a string
 * @s: string being checked
 * Return: success returns 1.,fail returns 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - gives back the length of a string
 * @s: the string being measured
 * Return: value of the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - evaluate the chars for palindrome using recursion
 * @s: string being evaluated
 * @i: counter
 * @len: size of the string
 * Return: 1 on success(palindrome), 0 on failure(no palindrome)
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s +  len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
