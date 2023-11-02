#include "main.h"
#include <stdio.h>

/*
 * print_times_table- function prints a times table
 * @n: the given number
 */
void print_times_table(int n)
{
	int x, y;

	if ((n < 0) || (n > 15))
		_putchar('\0');
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				{
					if ((x * y) < 10)
						_putchar('0' + (x * y));
					else
					{
						_putchar(((x * y) / 10) + '0');
						_putchar(((x * y) % 10) + '0');
					}
				}
				if (y == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
