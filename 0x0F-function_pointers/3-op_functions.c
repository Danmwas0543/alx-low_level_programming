#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - gives back the total of two numbers
 * @a: initial digit input
 * @b: next digit input
 * Return: a plus b added together
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - gives back the difference of two numbers
 * @a: initial digit input
 * @b: next digit input
 * Return: a minus b subtracted together
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - gives back the result of multiplication of two numbers
 * @a: the initial digit input
 * @b: next digit input
 * Return: multiply a and b and return their product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - gives back the result of division of two numbers
 *@a: the initial digit input
 *@b: next digit input
 *Return: the ratio between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gives back what remains from dividing two numbers
 * @a: the initial digit input
 * @b: the next digit input
 * Return: remainder of dividing a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
