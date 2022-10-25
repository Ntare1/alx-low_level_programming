#include "main.h"

/**
 * _puts- prints character
 * @str: string
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
