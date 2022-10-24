#include "main.h"

/**
 * _strlen- calculates the lenght of the string
 * Return: lenght of string
 * @s: string
 */
int _strlen(char *s)
{
	int le = 0;

	while (*s != "\0")
	{
		le++;
		s++;
	}
	return (le);
}
