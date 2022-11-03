#include "main.h"

/**
 * _puts_recursion- prints recursions
 * @s: character
 */
void _puts_recursion(char *s)
{
	write(1, &s, 1);
}
void main(void)
{
	_puts_recursion('1');
}
