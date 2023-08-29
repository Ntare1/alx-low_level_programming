#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr-links for together 
 * @ac: number av
 * @av: arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int x, y, z;
	char *ptr = NULL;
	int ret;

	y = 0;
	ret = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++)
		{
			ret++;
		}
	}

	ptr = (char *)malloc(ret + ac + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++)
		{
			ptr[y] = av[x][z];
			ptr++;
		}
		ptr[y] = '\n';
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}