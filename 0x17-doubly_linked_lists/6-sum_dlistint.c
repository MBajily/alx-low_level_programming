#include "lists.h"


/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 *
 * @head: list head
 *
 * Return: the summation
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}
	return (s);
}
