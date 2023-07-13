#include "main.h"
#include <stdlib.h>
/**
 * str_concat -> combine the input's endpoints at the end for length
 * @s1: first text to be combined
 * @s2: second text to be combined
 * Return: combined length of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int j, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = c = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[c] != '\0')
		c++;
	con = malloc(sizeof(char) * (j + c + 1));

	if (con == NULL)
		return (NULL);
	j = c = 0;
	while (s1[j] != '\0')
	{
		con[j] = s1[j];
		j++;
	}

	while (s2[c] != '\0')
	{
		con[j] = s2[c];
		j++, c++;
	}
	con[j] = '\0';
	return (con);
}
