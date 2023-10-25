#include "lists.h"
#include <stdlib.h>


/**
 * free_listint_safe - a function that frees
 * a listint_t list.
 *
 * @h: The first node.
 *
 * Returns: the size of the list that was free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int different;
	listint_t *tp;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		different = *h - (*h)->next;
		if (different > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
