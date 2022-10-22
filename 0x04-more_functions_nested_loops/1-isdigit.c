#include "main.h"

/**
 * _isdigit- checks if character is a digit
 * @c: character to be tested
 * Return: 1 if it is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c < 10))
		return (1);
	else
		return (0);
}
