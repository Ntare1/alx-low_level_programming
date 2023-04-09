#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node- adds a node at beginning of a linked list
 * @str: string to be added
 * @head: the linked list
 * Return: pointer to the added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *inter;
	int le = 0;

	while (str[le])
		le++;

	if (head != NULL && str != NULL)
	{
		inter = malloc(sizeof(list_t);
				if (inter == NULL)
				return (NULL);

				inter->str = strdup(str);
				inter->len = le;
				inter->next = *head;

				*head = inter;

				return (inter);
	}
	return (0);
}

