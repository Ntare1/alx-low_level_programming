#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len- function that iterates through a
 * linked list and return numer of nodes
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *node = h;
	size_t n = 0;

	while (node != NULL)
	{
		node = node->next;
		n++;
	}
	return (n);
}
