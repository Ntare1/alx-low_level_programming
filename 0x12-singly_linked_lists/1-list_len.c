#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - provides the number of elements of the list
 * @h:the linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
