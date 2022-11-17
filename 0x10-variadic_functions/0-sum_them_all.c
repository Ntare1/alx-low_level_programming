#include <stdarg.h>

/**
 * sum_them_all- sums up all provided arguments
 * @n: fixed argument
 * Return: 0 when n == 0 else the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nt;
	const unsigned int i;
	int sum = 0;

	va_start(nt, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
			sum += va_arg(const unsigned int, nt);
	}
	va_end(nt);
	return (sum);
}
