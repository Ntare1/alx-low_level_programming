#include "main.h"
/**
 * _isupper- checks if character is upper
 * @c: character to be checked
 * Return: 1 if character is upeper or else return 0
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
