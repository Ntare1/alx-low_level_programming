#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - entry point to print 10x
 */
void print_alphabet_x10(void)
{
	int letters;
	char sty;

	while (letters++ <= 9)
	{
		for (sty = 'a'; sty <= 'z'; sty++)
			_putchar(sty);
		_putchar('\n');
	}
}
