#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog- frees the memory
 * @d: the structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
