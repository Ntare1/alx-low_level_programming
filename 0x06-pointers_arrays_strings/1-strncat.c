#include "main.h"
/**
 * _strncat- appends the strings with atwist
 * @dest: destination string
 * @src:source string
 * @n: number of char to be copied
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
