#include "main.h"

/**
 * puts_half- prints half of  astring
 * @str:string to be halved
 */
void puts_half(char *str)
{
	int xyz = 0;

	while (*str != '\0')
	{
		xyz++;
		str++;
	}
	str -= (xyz / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
