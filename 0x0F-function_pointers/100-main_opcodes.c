#include <stdio.h>
#include <stdlib.h>

/**
 * main - own opcodes are generated
 * @argc: no of arguments
 * @argv: list of arguments
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int bytes, b;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (b = 0; b < bytes; b++)
	{
		if (b == bytes - 1)
		{
			printf("%02hhx\n", ar[b]);
			break;
		}
		printf("%02hhx ", ar[b]);
	}
	return (0);
}
