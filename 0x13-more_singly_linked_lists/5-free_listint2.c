#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2- frees memory occupied by the linkedlist
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	*head = NULL;
}
