#include "main.h"
/**
 * _strcmp- compares strings
 * @s1:string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			x = 1;
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
		return (1);
	if (x == 0)
		return (0);
	else
		return (1);
}
