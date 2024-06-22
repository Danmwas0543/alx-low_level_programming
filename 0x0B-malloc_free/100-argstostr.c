#include "main.h"
#include <stdlib.h>
/**
 * argstostr - joins arguments of a program
 * @ac: count of arguments
 * @av: vector of arguments
 * Return: an array pointer pointing to a char
 */
char *argstostr(int ac, char **av)
{
	char *aut;
	int u, m, a = 0, leng = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (u = 0; u < ac; u++)
	{
		for (m = 0; av[u][m]; m++)
			leng++;
	}
	leng += ac;
	aut = malloc(sizeof(char) * leng + 1);
	if (aut == NULL)
		return (NULL);

	for (u = 0; u < ac; u++)
	{
		for (m = 0; av[u][m]; m++)
		{
			aut[a] = av[u][m];
			a++;
		}
		if (aut[a] == '\0')
		{
			aut[a++] = '\n';
		}
	}
	return (aut);
}
