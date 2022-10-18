#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - entry point to print 10x
 */
void print_alphabet_x10(void)
{
	int letters;
	char y;

	while (letters++ <= 9)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
