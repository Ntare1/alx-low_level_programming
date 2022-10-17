#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char al, AL;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (AL = 'A'; AL <= 'Z'; AL++)
	{
		putchar(AL);
	}
	putchar('\n');

	return (0);
}
