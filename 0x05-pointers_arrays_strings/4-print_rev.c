#include "main.h"

/**
 * print_rev- prints string in reverse
 * @s : string to be reversed
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		_putchar(++*s);
	}
	_putchar('\n');
}


