#include "main.h"
/**
 * _strstr -> access site
 * @haystack: data entered
 * @needle: second data entered
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *g = needle;

		while (*f == *g && *g != '\0')
		{
			f++;
			g++;
		}

		if (g == '\0')
			return (haystack);
	}

	return (0);
}
