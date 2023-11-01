#include "main.h"
#include "stdio.h"
/*

*/
void print_times_table(int n)
{
    int x, y;

    if (0 > x > 15)
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
