#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - chooses the proper option to carry out the operation requested
 * @s: argument provided to the operator
 * Return: a reference to the function that matches the operator specified(par)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int b = 0;

	while (ops[b].op != NULL && *(ops[b].op) != *s)
		b++;

	return (ops[b].f);
}
