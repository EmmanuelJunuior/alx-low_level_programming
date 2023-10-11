#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Return sum of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Retunr: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two numbers
 * @a: first number
 * @b: second number
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns division of two numbers
 * @a: first number
 * @b: second number
 * Returns: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of dision of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
