#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints all the elements
 * of a listint_t list.
 *
 * @h: pointer for the list
 *
 * Return: Number
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cent = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cent++;
		tp = tp->next;
	}
	return (cent);
}
