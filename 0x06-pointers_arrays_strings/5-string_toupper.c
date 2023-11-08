#include "main.h"
/**
 * string_toupper- changers lowercase to upper case
 * @str: string
 * Return: char
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
	}
	return (str);
}
