#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - entry point to print 10x
 */
void print_alphabet_x10(void)
{
	int let;
	char sty;

	for (let = 0; let <= 9; let++)
	{
		for (sty = 'a'; sty <= 'z'; sty++)
			_putchar(sty);
		_putchar('\n');
	}
}
