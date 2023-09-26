#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index- iterates the index of nodes in alist
 * @head: linked list
 * @index: the index
 * Return: index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
