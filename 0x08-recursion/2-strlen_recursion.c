#include "main.h"

/**
 * _strlen_recursion- calculates lengthe of the recursion string
 * @s: the string
 * Return: returns the length
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
}
