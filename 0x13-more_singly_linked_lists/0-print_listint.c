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
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
