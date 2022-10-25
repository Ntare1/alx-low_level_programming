#include "main.h"

/**
 * _puts- prints character
 * @str: string
 */
void _puts(char *str)
{
	if (*str != '\0')
		_puts(str);
}
