#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- function that searchesfor an integer in an array
 * @array: array
 * @size: size of the array
 * @cmp: function that compares ints
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
}
