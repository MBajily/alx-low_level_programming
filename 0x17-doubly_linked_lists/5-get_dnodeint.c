#include "lists.h"


/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 *
 * @head: pointer to head node
 * @index: int
 *
 * Return: head or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == n)
		{
			return (head);
		}
		n++;
		head = head->next;
	}
	return (NULL);
}
