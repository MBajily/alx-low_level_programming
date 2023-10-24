#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - a function that frees
 * a listint_t list
 *
 * @head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	t = head;
	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}
