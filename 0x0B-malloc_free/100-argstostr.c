#include "main.h"
		
#include <stdlib.h>
		
/**
 * argstostr - essential entrance
 * @ac: first input of integer type
 * @av: pair of pointer arrays
 * Return: void
 */
char *argstostr(int ac, char **av)

{

	int j, o, s = 0, m = 0;

	char *st;



	if (ac == 0 || av == NULL)

		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (o = 0; av[j][o]; o++)

			m++;
	}
	m += ac;



	st = malloc(sizeof(char) * m + 1);

	if (st == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{

	for (o = 0; av[j][o]; o++)

	{

		st[s] = av[j][o];

		s++;

	}

	if (st[s] == '\0')

	{

		st[s++] = '\n';

	}

	}

	return (st);

}
