#include "3-calc.h"
/**
 * op_add- function adds two integers
 * @a: integer
 * @b: integer
 *
 * Return: the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- function subtracts two integers
 * @a: integer
 * @b: integer
 *
 * Return: the sub of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- function multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: multiple of two numberd
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- function divides two integers
 * @a: integer
 * @b: integer
 *
 * Return: the division of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- function that gives the remainder of two numbers after div
 * @a: integer
 * @b: integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
