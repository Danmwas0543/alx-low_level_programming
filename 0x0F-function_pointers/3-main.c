#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - displays the outcome of easy functions
 * @argc: the quantity of inputs that were given to the system
 * @argv: an array of parameters' pointers
 * return: always zero
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int no1, no2;
	char *B;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	B = argv[2];
	no2 = atoi(argv[3]);

	if (get_op_func(B) == NULL || B[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*B == '/' && no2 == 0) ||
	    (*B == '%' && no2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(B)(no1, no2));

	return (0);
}
