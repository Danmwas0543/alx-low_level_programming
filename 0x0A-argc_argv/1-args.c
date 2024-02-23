#include <stdio.h>
/**
 * main - displays the quantity  of arguments passed
 * @arg: number of cl arguments
 * @arv: array storing the cl arguments
 * Return: zero on success(0)
 */
int main(int arg, char **arv __attribute__((unused)))
{
	printf("%d\n", arg - 1);
	return (0);
}
