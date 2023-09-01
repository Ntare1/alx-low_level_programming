#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main- entry point
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: integer, 0 if no integer is passed, error if non-integer is passed
 */

int main(int argc, char *argv[])
{
	int x, y, add, length;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		add = 0;
		for (x = 1; x < argc; x++)
		{
			ptr = argv[x];
			length = strlen(ptr);

			for (y = 0; y < length; y++)
			{
				if (isdigit(*(ptr + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[x]);
		}

	printf("%d\n", add);
	}
	return (0);
}
