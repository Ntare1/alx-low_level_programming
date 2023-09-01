#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion- returns x to the power of y
 * @x: the integer to be powered
 * @y: the number of times x is going to be multiplied to self
 * Return: integer
 *
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
