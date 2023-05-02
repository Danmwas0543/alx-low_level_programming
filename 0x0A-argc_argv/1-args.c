#include <stdio.h>
#include "main.h"

/**
 * main - print the no. of args passed to the prgm
 * @argc: no. of args
 * @argv: array of args
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
