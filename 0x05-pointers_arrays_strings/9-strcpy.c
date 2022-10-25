#include "main.h"

/**
 * _strcpy- copies a string
 * @dest: destination of copy
 * @src: pointer
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int xy;

	while (*(src + xy) != '\0')
	{
		*(dest + xy) = *(src + xy);
		xy++;
	}
	*(dest + xy) = '\0';
	return (dest);
}
