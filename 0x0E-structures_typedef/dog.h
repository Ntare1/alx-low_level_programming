#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog- a structure that details a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog 's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
