#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name
 * @argc: no. of args
 * @argv: array of args
 * Return: 0 on Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
