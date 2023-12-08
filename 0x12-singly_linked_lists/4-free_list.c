#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list- frees memory of linked list
 * @head:linked list
 */
void free_list(list_t *head)
{
	list_t *inter;

	while (head != NULL)
	{
		inter = head;
		head = head->next;
		free(inter->str);
		free(inter);
	}
	free(head);
}
