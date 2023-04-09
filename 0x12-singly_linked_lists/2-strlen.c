#include "lists.h"

/**
 * _strlen- calculates the lenght of the string
 * Return: lenght of string
 * @s: string
 */
int _strlen(char *s)
{
	int le = 0;

	while (s[le] != '\0')
	{
		le++;
	}
	return (le);
}
