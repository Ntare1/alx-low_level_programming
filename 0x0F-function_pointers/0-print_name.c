#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name- function that prints a name
 * @name: string to be printed
 * @f: function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
