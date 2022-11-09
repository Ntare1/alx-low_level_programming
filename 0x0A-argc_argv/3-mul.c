#include <stdio.h>

/**
 * main- entry point
 * @argc: counts the arguments
 * @argv: input arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
