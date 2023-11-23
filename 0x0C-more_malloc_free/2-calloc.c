#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc- function allocates memory for an array
 * @nmemb: the array
 * @size: elements of the array
 * Return: pointer / NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_blk;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_blk = malloc(nmemb * size);
	if (mem_blk != NULL)
	{
		for (x = 0; x < (nmemb * size); x++)
			mem_blk[x] = 0;
		return (mem_blk);
	}
	else
		return (NULL);
}
