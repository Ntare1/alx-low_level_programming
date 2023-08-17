#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings- prints strings
 * @separator: separates the printed strings
 * @n: number of arguments to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nt;
	unsigned int i;
	char *xy;

	va_start(nt, n);

	for (i = 0; i < n; i++)
	{
		xy = va_arg(nt, char *);

		if (xy)
			printf("%s", xy);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(nt);
}
