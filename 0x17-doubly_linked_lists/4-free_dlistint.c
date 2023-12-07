#include "lists.h"


/**
 * free_dlistint - a function that
 * frees a dlistint_t list.
 *
 * @head: list head
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *l;

	while (head)
	{
		l = head;
		head = head->next;
		free(l);
	}
}
