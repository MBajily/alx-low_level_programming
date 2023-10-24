#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head
 * node’s data (n).
 *
 * @head: the pointer
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int number;

	if (!head || !*head)
	{
		return (0);
	}
	number = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;
	return(number);
}
