#include "main.h"

/**
 * print_rev- prints string in reverse
 * @s : string to be reversed
 */
void print_rev(char *s)
{
	int le = 0;

	while (s[le] != '\0')
		le++;
	for (le = le - 1; le >= 0; le--)
	{
		_putchar(s[le]);
	}
	_putchar('\n');
}


