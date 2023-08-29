#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * counter- calculates the change
 * @x:variable
 * Return: change
 */
int counter(int x)
{
	int quant = 0;

	while (x != 0)
	{
		if (x % 10 == 9 || x % 10 == 7)
			x -= 2;
		else if (x % 25 == 0)
			x -= 25;
		else if (x % 10 == 0)
			x -= 10;
		else if (x % 5 == 0)
			x -= 5;
		else if (x % 2 == 0)
		{
			if (x % 10 == 6)
				x -= 1;
			else
				x -= 2;
		}
		else
			x -= 1;

		quant++;
	}

	return (quant);
}

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int x, change;

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x < 0)
		printf("0\n");
	else
	{
		change = counter(x);

		printf("%d\n", change);
	}

	return (0);
}
