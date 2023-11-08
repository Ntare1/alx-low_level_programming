#include "main.h"

/**
 * rev_string- reverses string
 * @s: input
 * Return: reversed string
 */
void rev_string(char *s)
{
	int k;
	int m = 0;
	char n = s[0];

	while (s[m] != '\0')
		m++;
	for (k = 0; k < m; k++)
	{
		m--;
		n = s[k];
		s[k] = s[m];
		s[m] = n;
	}
}


