#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint- function that adds node to a linked list
 * @head: linked list
 * @n: value
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
