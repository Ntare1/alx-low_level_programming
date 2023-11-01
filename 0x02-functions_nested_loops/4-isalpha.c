#include "main.h"
/**
 * _isalpha - checks character is alphabet
 * @c: character to be checked
 * Return: 1 in success
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
