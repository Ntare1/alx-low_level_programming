#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint- function that prints a linked list
 * @h: the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node = h;
	size_t n = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		n++;
	}
	return (n);
}
