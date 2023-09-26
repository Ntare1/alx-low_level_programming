#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *xyz;
	listint_t *cpy = *head;
	unsigned int i;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	xyz = cpy->next;
	cpy->next = xyz->next;
	free(xyz);
	return (1);
}
