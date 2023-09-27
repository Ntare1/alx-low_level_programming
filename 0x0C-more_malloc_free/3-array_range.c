#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- function that creates an array of integer
 * @min: lowest integer 
 * @max: highest integer
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *mem-blk;
	int x, y = 0;

	if (min > max)
		return (NULL);
	mem-blk = malloc(sizeof(*mem-blk) * ((max - min) + 1));
	if (mem-blk != NULL)
	{
		for (x = min; x <= max; x++)
		{
			mem-blk[y] = x;
			y++;
		}
		return (mem-blk);
	}
	else
		return (NULL);

}
