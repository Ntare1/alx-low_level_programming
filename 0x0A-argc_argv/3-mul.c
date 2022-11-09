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
	int z = x * y;

	if (argc == 2)
	{
		printf("%d\n", z);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
