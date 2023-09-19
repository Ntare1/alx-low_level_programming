#include <stdio.h>
#include "dog.h"

/**
 * print_dog- prints the struct
 * @d: pointer to the struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *x = "nil";

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\nAge: %f\nOwner: %s\n", x, d->age, d->owner);
		else if (d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, x);
		else if (d->age <= 0)
			printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, x, d->owner);
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
