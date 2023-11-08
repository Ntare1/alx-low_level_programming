#include "main.h"

/**
 * puts2- prints the first character then skips on to the next
 * @str: string
 */
void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
			_putchar (str[x]);
		else
			continue;
	}
	_putchar('\n');
}
