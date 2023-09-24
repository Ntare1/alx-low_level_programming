#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- function that allocates memory
 * @b: size of the memory allocated
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);
}
