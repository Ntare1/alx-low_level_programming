#include "main.h"

/**
 * more_numbers- prints numbers over and over again
 * Return: the printed numbers
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; x < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

