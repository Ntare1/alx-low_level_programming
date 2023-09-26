#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint- revrses the linked list
 * @head: linked list
 * Return: new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *right, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = right;
	}

	(*head)->next = back;

	return (*head);
}