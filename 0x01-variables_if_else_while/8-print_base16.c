#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int y;
	char x;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');
	for (x = 'a'; x <= 'f'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}
