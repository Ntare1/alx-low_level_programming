#include "main.h"

/**
 * print_line-prints a line
 * @n: number of dash to print
 */
void print_line(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
