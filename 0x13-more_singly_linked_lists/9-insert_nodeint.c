#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a node to a given index
 * @head: linked list
 * @idx: the index
 * @n: the data to be add
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *xyz;
	listint_t *cpy = *head;
	unsigned int i;

	xyz = malloc(sizeof(listint_t));
	if (xyz == NULL)
		return (NULL);

	xyz->n = n;

	if (idx == 0)
	{
		xyz->next = copy;
		*head = xyz;
		return (xyz);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	xyz->next = cpy->next;
	cpy->next = xyz;

	return (xyz);
}

