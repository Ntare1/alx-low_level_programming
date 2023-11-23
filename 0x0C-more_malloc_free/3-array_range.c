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
	int *mem_blk;
	int x, y = 0;

	if (min > max)
		return (NULL);
	mem_blk = malloc(sizeof(*mem_blk) * ((max - min) + 1));
	if (mem_blk != NULL)
	{
		for (x = min; x <= max; x++)
		{
			mem_blk[y] = x;
			y++;
		}
		return (mem_blk);
	}
	else
		return (NULL);

}
