#include "main.h"
/**
 *_strncat -> a tool that joins two strings
 *@dest: first value stored
 *@src: second value stored
 *@n: stored value
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int f;
	int g;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	g = 0;
	while (g < n && src[g] != '\0')
	{
		dest[f] = src[g];
		f++;
		g++;
	}
	dest[f] = '\0';
	return (dest);
}
