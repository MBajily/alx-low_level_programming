#include "lists.h"


/**
 * delete_dnodeint_at_index - a function that deletes
 * the node at index index of a dlistint_t linked list.
 *
 * @head: list head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nd;
	unsigned int c;

	if (*head == NULL)
	{
		return (-1);
	}
	nd = *head;
	if (index == 0)
	{
		*head = nd->next;
		if (nd->next != NULL)
		{
			nd->next->prev = NULL;
		}
		free(nd);
		return (1);
	}
	for (c = 0; nd != NULL && c < index - 1 ; c++)
	{
		nd = nd->next;
	}
	if (nd == NULL || nd->next == NULL)
	{
		return (-1);
	}
	if (nd->next->next != NULL)
	{
		nd->next = nd->next->next;
		free(nd->next->prev);
		nd->next->prev = nd;
		return (1);
	}
	else
	{
		free(nd->next);
		nd->next = NULL;
		return (1);
	}
	return (-1);
}
