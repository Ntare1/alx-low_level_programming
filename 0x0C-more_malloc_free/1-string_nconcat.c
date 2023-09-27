#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- function concates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to add to s2
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int length = n, indx;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (indx = 0; s1[indx]; indx++)
		length++;

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	length = 0;

	for (indx = 0; s1[indx]; indx++)
		str[length++] = s1[indx];

	for (indx = 0; s2[indx] && indx < n; indx++)
		str[length++] = s2[indx];

	str[length] = '\0';

	return (str);
}
