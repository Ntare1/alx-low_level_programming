#include <stdio.h>

/**
 * main- entry point
 * @argc: counts the arguments
 * @argv: input arguments
 * Return: 0
 */
int main(int argc, char *arg[])
{
	int x = 2;
	int y = 2;
	int z = x * y;

	if (argc <= 3)
	{
		printf("%d\n", z);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
