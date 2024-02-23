#include <stdio.h>
/**
 * main - displays all arguments passed
 * @arc: amonut of cli arguments
 * @arv: array that stores the cl arguments
 * Return: zero on success(0)
 */
int main(int arc, char *arv[])
{
	int a;

	for (a = 0; a < arc; a++)
	{
		printf("%s\n", arv[a]);
	}
	return (0);
}
