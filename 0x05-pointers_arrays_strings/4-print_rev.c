#include "main.h"

/**
 * print_rev- prints string in reverse
 * @s : string to be reversed
 */
void print_rev(char *s)
{
	for (*s = 'z'; *s >= 'a'; *s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}


