#include "main.h"

/**
 * _memset- fills a block of memory with a value
 * @s: pointer to memory to fill
 * @b: value to be set
 * @n: number of bytes set of the value
 * Return: pointer to memory of filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;
	char *y = s;

	for (x = 0; x < n; x++)
	{
		_putchar(y[x] = b);
	}
	return (y);
}
