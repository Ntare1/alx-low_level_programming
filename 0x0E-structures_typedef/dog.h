#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog- a structure that details a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog 's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif