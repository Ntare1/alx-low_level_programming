#include "main.h"
/**
 * _strcat- appends the strings
 * @dest: destination string
 * @src:source string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
		for (y = 0; src[y] != '\0'; y++)
		{
			dest[x] = src[y];
		}
	dest[x] = '\0';
	return (dest);
}
