#include <stdio.h>
#include "main.h"

/**
 * find_square- function that takes two arguments and 
 * finds the squareroot of one using the other
 * @x: the argument that needs a squareroot
 * @y: argument used to find the square root of x
 * Return: int
*/
int find_square(int x, int y)
{
    if (y * y == x)
    {
        return (y);
    }
    else if ((y * y) > x)
    {
        return (-1);
    }
    else
    {
        return (find_square (x, y + 1));
    }
}


/**
 * _sqrt_recursion- function finds the squareroot of n
 * @n: number that needs a square root
 * Return: int
*/
int _sqrt_recursion(int n)
{
    return (find_square(n, 1));
}