#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end- adding a node to the end of a linked list
 * @head: linked list
 * @n: the vaalue to be added
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new_node;
	}
	return (new_node);
}

