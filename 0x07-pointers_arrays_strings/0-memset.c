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
	unsigned int x;
	unsigned char *y = s = b;

	for (x = 0; x < n; x++)
		y[x] = value;
	return (y);
}
