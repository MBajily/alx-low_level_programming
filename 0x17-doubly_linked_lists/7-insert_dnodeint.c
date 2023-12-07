#include "lists.h"


/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @n: new node
 * @h: list head
 * @idx: new index
 *
 * Return: new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *new_element;
	unsigned int x;

	new_element = NULL;
	if (idx == 0)
	{
		new_element = add_dnodeint(h, n);
	}
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
		{
			while (head->prev != NULL)
			{
				head = head->prev;
			}
		}
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
				{
					new_element = add_dnodeint_end(h, n);
				}
				else
				{
					new_element = malloc(sizeof(dlistint_t));
					if (new_element != NULL)
					{
						new_element->n = n;
						new_element->next = head->next;
						new_element->prev = head;
						head->next->prev = new_element;
						head->next = new_element;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}
	return (new_element);
}
