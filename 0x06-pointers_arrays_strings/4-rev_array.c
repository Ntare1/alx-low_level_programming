#include "main.h"
/**
 * reverse_array- reverses elements of the array
 * @a: array
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int x[n];
	int y;

	for (y = 0; y < n; y++)
	{
		x[n - 1 - y] = a[n];
	}
	for (y = 0; y < n; y++)
	{
		a[y] = x[y];
	}
}
