#include "lists.h"
#include <stdlib.h>


/**
 * *insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @head: the first node.
 * @n: New node.
 * @idx: New position.
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newN, *tp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		tp = *head;
		for (; i < idx - 1 && tp != NULL; i++)
		{
			tp = tp->next;
		}
		if (tp == NULL)
		{
			return (NULL);
		}
	}
	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
	{
		return (NULL);
	}
	newN->n = n;
	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
		return (newN);
	}
	newN->next = tp->next;
	tp->next = newN;
	return (newN);
}
