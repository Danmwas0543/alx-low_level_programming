#include <stdlib.h>
#include "main.h"

/**
 * count_word -> supporting tool to count the words in the text
 * @s: text being counted
 * return: no of texts
 */
int count_word(char *s)
{
	int f, d, z;

	f = 0;
	z = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			z++;
		}
	}

	return (z);
}
/**
 *strtow - separates words from a text
 *@str: string being separated
 *Return: link to a string sequence (for success) or NULL (for failure).
 */
char **strtow(char *str)
{
	char **max, *p;
	int j, l = 0, m = 0, wor, d = 0, stt, ed;

	while (*(str + m))
		m++;
	wor = count_word(str);
	if (wor == 0)
		return (NULL);

	max = (char **) malloc(sizeof(char *) * (wor + 1));
	if (max == NULL)
		return (NULL);

	for (j = 0; j <= m; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (d)
			{
				ed = j;
				p = (char *) malloc(sizeof(char) * (d + 1));
				if (p == NULL)
					return (NULL);
				while (stt < ed)
					*p++ = str[stt++];
				*p = '\0';
				max[l] = p - d;
				l++;
				d = 0;
			}
		}
		else if (d++ == 0)
			stt = j;
	}

	max[l] = NULL;

	return (max);
}
