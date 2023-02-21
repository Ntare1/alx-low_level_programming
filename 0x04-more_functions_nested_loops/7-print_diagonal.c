#include "main.h"

/**
 * print_diagonal-prints lin ediagonal
 * @n: number of times \ will be printed
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
