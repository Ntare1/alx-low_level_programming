#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint- frees the memory occupied by the linked list
 * @head: the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}

