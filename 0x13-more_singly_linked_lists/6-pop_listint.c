#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint- function that deletes the head node
 * @head: linked list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (*head == NULL)
		return (0);

	node = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (x);
}
