#include "lists.h"
#include <stdlib.h>


/**
 * *get_nodeint_at_index -  a function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: The first node
 * @index: index of the desired node
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
