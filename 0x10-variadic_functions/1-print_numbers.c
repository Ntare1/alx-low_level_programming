#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- prints numbers
 * @separator: a comma that separates the printed numbers
 * @n: the number of arguments to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nt;
	unsigned int i;

	va_start(nt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nt, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(nt);
}
