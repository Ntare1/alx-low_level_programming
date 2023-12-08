#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the content of the list
 * @h:the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
