#include "main.h"
/**
 * _islower -check if character is lower case
 * @c: character being checked
 * Return: 1 if success
 * otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
