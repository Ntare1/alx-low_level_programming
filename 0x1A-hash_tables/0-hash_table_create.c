#include "hash_tables.h"

/**
 * hash_table_create-creates a hash table
 * @size: size of the hash table
 * Return: pointer to hash table or NULL in case
 * of failure to create hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create;
	unsigned long int x;

	create = malloc(sizeof(hash_table_t));

	if (create == NULL)
		return (NULL);

	create->size = size;
	create->array = malloc(sizeof(hash_node_t *) * size);

	if (create->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		create->array[x] = NULL;
	}

	return (create);
}
