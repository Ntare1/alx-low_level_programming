#include "main.h"

/**
 * optimus- recursive function taking two arguments to find a prime number
 * @x: number to investigate if its a prime number
 * @y: number used to divide x
*/
int optimus(int x, int y)
{
    if (y < 2)
    {
        return (1);
    }
    else
    {
        if (x % y == 0)
        {
            return (0);
        }
        else
        {
            return (optimus(x, y - 1));
        }
    }
}

/**
 * is_prime_number- function to check if n is prime number
 * @n: integer to be checked
*/
int is_prime_number(int n)
{
    if (n <= 2)
    {
        return (0);
    }
    else
    {
        return (optimus(n, n - 1));
    }
}

