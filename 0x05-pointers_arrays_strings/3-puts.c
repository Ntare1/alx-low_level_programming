#include "main.h"

/**
 * _puts- prints character
 * @str: string
 */
void _puts(char *str)
{
	while (str)
		_puts(str++);
}
