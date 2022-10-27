#include "main.h"
/**
 * reverse_array- reverses elements of the array
 * @a: array
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		n--;
		x = a[y];
		a[y] = a[n];
		a[n] = x;
	}
}
