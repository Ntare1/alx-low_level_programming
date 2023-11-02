#include "main.h"
/**
 * print_last_digit- print last digit
 * @r: number to be computed
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	int lst = r % 10;

	if (lst < 0)
		lst *= -1;
	_putchar(lst + '0');
	return (lst);
}
