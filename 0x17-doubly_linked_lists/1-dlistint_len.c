#include "lists.h"

/**
 * dlistint_len - a function that returns the
 * number of elements in a linked dlistint_t list.
 *
 * @h: the list
 *
 * Return: node numbers
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
	{
		return (x);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
