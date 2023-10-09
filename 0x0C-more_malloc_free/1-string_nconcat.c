#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -> n bytes of one string are combined with another string.
 * @s1: string bieng attached to
 * @s2: string being used to attach to the other
 * @n: how many bytes from s2 should be appended to s1
 * Return: A reference to the finished string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int a = 0, k = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		d = malloc(sizeof(char) * (ln1+ n + 1));
	else
		d = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!d)
		return (NULL);

	while (a < ln1)
	{
		d[a] = s1[a];
		a++;
	}

	while (n < ln2 && a < (ln1 + n))
		d[a++] = s2[k++];

	while (n >= ln2 && a < (ln1 + ln2))
		d[a++] = s2[k++];

	d[a] = '\0';

	return (d);
}
