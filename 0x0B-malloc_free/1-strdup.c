#include <stdio.h>
		
#include <stdlib.h>
		
#include "main.h"
		
/**
 *  _strdup - copy to a new spot in memory
 *  @str: character used
 *  Return: 0 (void)
 */
char *_strdup(char *str)

{

	char *a;

	int b, e = 0;



	if (str == NULL)

		return (NULL);

	b = 0;

	while (str[b] != '\0')

		b++;



	a = malloc(sizeof(char) * (b + 1));



	if (a == NULL)

		return (NULL);



	for (e = 0; str[e]; e++)

		a[e] = str[e];



	return (a);

}
