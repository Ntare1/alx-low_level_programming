#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index- fubnction that gives inde of the key
 * @key: is the provided key
 * @size: is the size of the table
 * Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
