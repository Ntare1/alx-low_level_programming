#include "main.h"

/**
 * print_most_numbers- prints numbers excluding 2&4
 * Return: the numbers printed
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if ((x == 2) || (x == 4))
			continue;
		_putchar(x + '0');
	}
	_putchar('\n');
}
