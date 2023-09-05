#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat-function that joines string
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer / NULL
 */
char *str_concat(char *s1, char *s2)
{
	int str1;
	int str2;
	char *new_str = NULL;
	unsigned int x;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0'; str2++)
		;
	new_str = (char *)malloc((str1 + str2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		new_str[x] = s1[x];
	for (; s2[count] != '\0'; x++)
	{
		new_str[x] = s2[count];
		count++;
	}
	return (new_str);
}
