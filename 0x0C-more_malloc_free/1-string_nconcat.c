#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - merges x bytes of one string with a different string
 * @s1: string to be added
 * @s2: string to join together from
 * @n: the amount of bytes from s2 should be appended to s1
 * Return: a reference to the finished string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int j = 0, k = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;
	if (n < ln2)
		t = malloc(sizeof(char) * (ln1 + n + 1));
	else
		t = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (!t)
		return (NULL);
	while (j < ln1)
	{
		t[j] = s1[j];
		j++;
	}

	while (n < ln2 && j < (ln1 + n))
		s[j++] = s2[k++];
	s[j] = '\0';
	return (t);
}
