#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *add_node_end - a function that adds
 * a new node at the end of a list_t list.
 *
 * @str: Address of new node
 * @head: first node
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned in length;
	list_t *tp, *tp2;

	length = 0;
	tp = malloc(sizeof(list_t));
	if (str == NULL || tp == NULL)
	{
		return (NULL);
	}

	tp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(tp);
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}
	tp->len = length;
	tp->next = NULL;

	if (*head == NULL)
	{
		*head = tp;
		return (tp);
	}

	tp2 = *head;
	
	while (tp2->next)
	{
		tp2 = tp2->next;
		tp2->next = tp;
	}
	return (tp);
}
