#include "lists.h"
#include <stdlib.h>


/**
 * *find_listint_loop - a function that finds
 * the loop in a linked list.
 *
 * @head: Desired list.
 *
 * Returns: The address of the node where the
 * loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s1 = head;
	listint_t *s2 = head;

	if (!head)
	{
		return (NULL);
	}
	while (s1 && s2 && s2->next)
	{
		s2 = s2->next->next;
		s1 = s1->next;
		if (s2 == s1)
		{
			s1 = head;
			while (s1 != s2)
			{
				s1 = s1->next;
				s2 = s2->next;
			}
			return (s2);
		}
	}
	return (NULL);
}
