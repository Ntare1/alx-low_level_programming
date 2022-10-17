#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 0; y < 16; y++)
		putchar((y % 16) + '0');

	putchar('\n');
	return (0);
}
