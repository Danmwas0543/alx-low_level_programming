#include "main.h"

/**
 * _isalpha -> searches for an alphabet
 * @c: char being searched
 * Return: 0 on failure and 1 on success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
