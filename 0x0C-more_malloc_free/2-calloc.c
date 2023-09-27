#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc- function allocates memory for an array
 * @nmemb: the array
 * @size: elements of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem-blk;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem-blk = malloc(nmemb * size);
	if (mem-blk != NULL)
	{
		for (x = 0; x < (nmemb * size); x++)
			mem-blk[x] = 0;
		return (mem-blk);
	}
	else
		return (NULL);
}
