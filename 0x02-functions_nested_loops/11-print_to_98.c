#include "main.h"
/**
 * print_to_98- prints numbers from n to 98
 * @n: is the value to start from
 */

void print_to_98(int n)
{
    int i;
    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            printf("%d", i);
            if (i == 98)
            continue;
            _putchar(',');
            _putchar(' ');
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            printf("%d", i);
            if (i == 98)
            continue;
            _putchar(',');
            _putchar(' ');
        }
    }
}