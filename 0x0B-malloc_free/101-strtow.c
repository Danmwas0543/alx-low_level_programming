#include <stdlib.h>
#include "main.h"
/**
 * count_word - counting-words-in-a-string-assistance function
 * @s: string being counted
 * Return: total amount of words counted
 */
int count_word(char *s)

{

		int fl, d, x;



			fl = 0;

				x = 0;



					for (d = 0; s[d] != '\0'; d++)

							{

										if (s[d] == ' ')

														fl = 0;

												else if (fl == 0)

															{

																			fl = 1;

																						x++;

																								}

													}



						return (x);

}

/**

 * strtow - division of a string into words

 * @str: string being divided

 *

 * Return: reference to an array of strings (Success)

 * or NULL (Error)

 */

char **strtow(char *str)

{

	char **matrix, *tmp;

	int j, l = 0, ln = 0, word, d = 0, strt, en;



	while (*(str + ln))

		ln++;

	word = count_word(str);

	if (word == 0)

		return (NULL);



	matrix = (char **) malloc(sizeof(char *) * (word + 1));

	if (matrix == NULL)

		return (NULL);



	for (j = 0; j <= ln; j++)

	{

		if (str[j] == ' ' || str[j] == '\0')

		{

			if (d)

			{

				en = j;

				tmp = (char *) malloc(sizeof(char) * (d + 1));

				if (tmp == NULL)

					return (NULL);

				while (start < en)

					*tmp++ = str[strt++];

				*tmp = '\0';

				matrix[k] = tmp - d;

				k++;

				d = 0;

			}

		}

		else if (d++ == 0)

			strt = j;

	}



	matrix[k] = NULL;



	return (matrix);

}
