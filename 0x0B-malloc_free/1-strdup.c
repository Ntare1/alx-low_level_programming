#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup-function returning a pointer to new allocated space
 * with a copy of a string
 * @str: string we will make a copy
 * Return: a pointer / NULL
 */
char *_strdup(char *str)
{
	char *new_str = NULL;
	unsigned int x;
	int y;

	if (str == NULL)
		return (NULL);
	for (y = 0; str[y] != '\0'; y++)
		;
	new_str = (char *)malloc(y + 1 * sizeof(char));
	if (new_str != NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
			new_str[x] = str[x];
	} else
	{
		return (NULL);
	}
	new_str[x] = '\0';
	return (new_str);
}
