#include "main.h"
/**
 * _puts_recursion- a recursive function that prints a string
 * @s:character
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
