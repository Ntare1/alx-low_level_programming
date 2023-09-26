#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint- sums the data in the linked list
 * @head: linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
