#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- Function that returns a pointer to a matrix
 * @width: rows
 * @height: columns
 * Return: a pointer / NULL
 */
int **alloc_grid(int width, int height)
{
	int x, y, z;
	int *ptr;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		*(matrix + x) = (int *)malloc(width * sizeof(int));
		if (*(matrix + x) == NULL)
		{
			for (x = 0; x < height; x++)
			{
				ptr = matrix[x];
				free(ptr);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			matrix[y][z] = 0;
		}
	}
	return (matrix);
}
