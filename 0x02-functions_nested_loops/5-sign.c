#include "main.h"
/**
 * print_sign -prints sign of number
 * @n: number to be checked
 * Return: 0 when 0 1 when + and -1 when -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
		_putchar ('-');
	return (-1);
}
