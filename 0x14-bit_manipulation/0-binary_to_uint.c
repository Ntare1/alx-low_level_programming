#include <stdio.h>
#include "main.h"

/**
 * _strlen- function to calculate lenght of a string
 * @s: string
 * Return: Length of a string
 */
int _strlen(const char *s)
{
	int le = 0;

	while (s[le] != '\0')
	{
		le++;
	}

	return (le);
}


/**
 * binary_to_uint- function that turns binary to decimal
 * @b: the string containg the binary
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int x = _strlen(b);
	int y;
	unsigned int z = 0;

	if (b == NULL)
		return (0);

	for (y = 0; y < x; y++)
	{
		if (b[y] != '0' && b[y] != '1')
		{
			return (0);
		}
		else
		{
			z += (b[y] - '0') * (1 << (x - y - 1));
		}
	}

	return (z);
}
