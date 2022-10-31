#include "main.h"

/**
 * _strpbrk- Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 * Return: If a set is matched else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}

