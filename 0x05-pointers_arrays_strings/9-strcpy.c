#include "main.h"

/**
 * _strcpy- copies a string
 * @dest: destination of copy
 * @src: pointer
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *xy = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (xy);
}
