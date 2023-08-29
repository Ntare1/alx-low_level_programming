#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function frees a matrix
 * @grid: rows
 * @height: columns
 * Return: pointer / NULL
 */
void free_grid(int **grid, int height)
{
	int x;
	int *ptr;

	for (x = 0; x < height; x++)
	{
		ptr = grid[x];
		free(ptr);
	}
	free(grid);
}
