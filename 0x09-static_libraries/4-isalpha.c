#include "main.h"
/**
 * _isalpha -> looks for an alphabetic char
 * @c: char to be looked for
 * Return: 1 on success, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
