#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end- adds a  node at the end of a linked list
 * @head:linked list
 * @str: the string to be add
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *inter, *ptr;

	if (str != NULL)
	{
		inter = malloc(sizeof(list_t));
		if (inter == NULL)
			return (NULL);
		inter->str = strdup(str);
		inter->len = _strlen1(str);
		inter->next = NULL;

		if (*head == NULL)
		{
			*head = inter;
			return (inter);
		}
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = inter;
			return (inter);
		}
	}
	return (0);
}

/**
 * _strlen1- calculates the length of a string
 * @s:string
 * Return: leng of the string
 */
int _strlen1(const char *s)
{
	int le = 0;

	while (s[le] != '\0')
	{
		le++;
	}
	return (le);
}
