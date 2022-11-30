#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: The char in the array
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
    unsigned int y;
    char *x;

    if (size == 0)
    retutn (NULL)
    x = malloc(size * sizeof(char))
    if (x == 0)
    return (NULL)
    for (y = 0; y < size; y++)
    {
        x[y] = c;
    }
    return (x);
}
