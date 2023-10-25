#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list.
 *
 * @index: Index of node that will delete.
 * @head: The pointer.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *crnt = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tp || !(tp->next))
		{
			return (-1);
		}
		tp = tp->next;
		i++;
	}
	crnt = tp->next;
	tp->next = crnt->next;
	free(crnt);
	return (i);
}
