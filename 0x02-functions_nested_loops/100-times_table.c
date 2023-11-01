#include "main.h"
#include "stdio.h"
/*
 * print_times_table- function prints a times table
 * of a given number
 * @n: the given number
*/
void print_times_table(int n)
{
    int x, y;

    if ((n < 0) || (n > 15))
	    _putchar("");
    else
    {
	    for (x = 0; x <= n; x++)
	    {
		    for (y = 0; y <= n; y++)
		    {
			    _putchar(x * y);
			    if (y == n)
				    continue;
			    _putchar(", ");
		    }
		    _putchar("\n");
	    }
    }
}
