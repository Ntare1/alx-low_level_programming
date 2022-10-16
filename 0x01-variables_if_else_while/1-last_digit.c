#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- entry point
 * Return: always 0
 */
int main(void)
{
	int n, i;
		i = (n % 10);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 5)
		printf("Last digit of %d is, %d, and is greater than 5\n", n, i);
	if (i == 0)
		printf("Last digit of %d is, %d, and is 0\n", n, i);
	else if (i < 6)
		printf("Last digit of %d is, %d, and is less than 6 and not 0\n", n, i);
	return (0);
}

