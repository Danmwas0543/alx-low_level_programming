#include "main.h"
#include <stdlib.h>
/**
 * argstostr -> crucial entrance point
 * @ac: integer entered
 * @av: pair of link arrays
 * return: null
 */
char *argstostr(int ac, char **av)
{
	int j, o, t = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (o = 0; av[j][o]; o++)
			k++;
	}
	k += ac;

	s = malloc(sizeof(char) * k + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (o = 0; av[j][o]; o++)
	{
		s[t] = av[j][o];
		t++;
	}
	if (s[t] == '\0')
	{
		s[t] = '\n';
	}
	}
	return (s);
}
