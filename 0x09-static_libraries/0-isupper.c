#include "main.h"
/**
 * _isupper -> evaluates if letters are in uppercase
 * @c:character being checked
 * Return: 0 if failed , else 1 on success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
