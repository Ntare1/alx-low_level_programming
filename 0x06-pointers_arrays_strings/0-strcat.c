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
	int y = _strlen(src);

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x + y] = src[x];
	}
	dest[x + y] = '\0';
	return (dest);
}
