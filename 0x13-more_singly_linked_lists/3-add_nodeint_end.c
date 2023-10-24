#include "lists.h"
#include <stdlib.h>


/**
 * *add_nodeint_end - a function that adds
 * a new node at the end of a listint_t list.
 *
 * @head: first node
 * @n: a number
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *t2;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
	{
		return (NULL);
	}
	t->n = n;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	t2 = *head;
	while (t2->next)
	{
		t2 = t2->next;
	}
	t2->next = t;
	return (t);
}
