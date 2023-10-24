#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 *
 * @head: the first node.
 *
 * Return: 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *tp = head;

	while (tp)
	{
		summation += tp->n;
		tp = tp->next;
	}
	return (summation);
}
