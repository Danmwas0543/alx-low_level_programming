#include <stdio.h>
/**
 * main - computes sizes of various data types
 * Return: 0 zero
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("size of a char: %lu byte\(s\)\n", sizeof(c));
	printf("size of an int: %lu byte\(s\)\n", sizeof(c));
	printf("size of a long int: %lu byte\(s\)\n", sizeof(long int));
	printf("size of a long long int: %lu byte\(s\)\n", sizeof(long long int));
	printf("size of a float: %lu byte\(s\)\n", sizeof(f));
	return (0);
}
