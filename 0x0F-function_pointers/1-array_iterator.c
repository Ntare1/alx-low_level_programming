#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- function that iterates through an array
 * @array: array
 * @size: the size of the array
 * @action: function acting on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
