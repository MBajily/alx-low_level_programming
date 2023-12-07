#include "lists.h"


/**
 * add_dnodeint - a function that adds a
 * new node at the beginning of a dlistint_t list.
 *
 * @head: list head
 * @n: number
 *
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tp, *nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
	{
		return (NULL);
	}
	nd->n = n;
	nd->prev = NULL;
	nd->next = NULL;
	if (*head == NULL)
	{
		nd->next = NULL;
		*head = nd;
		return (*head);
	}
	tp = *head;
	nd->next = tp;
	tp->prev = nd;
	*head = nd;
	return (nd);
}
