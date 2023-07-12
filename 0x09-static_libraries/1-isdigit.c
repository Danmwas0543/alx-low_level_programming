#include "main.h"
/**
 * _isdigit -> searches for a numerical value
 * @c: number being checked
 * Return: 0 on failure and 1 on success
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
