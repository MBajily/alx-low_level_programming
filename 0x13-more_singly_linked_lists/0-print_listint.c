#include "lists.h"
#include <stdio.h>


/*
 * size_t print_listint - prints all the elements
 * of a listint_t list.
 *
 * @h: pointer for the list
 *
 * Return: Number
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *poin;
	unsigned int cent = 0;

	poin = h;
	while (poin)
	{
		printf("%d\n", poin->n);
		cent++;
		poin = poin->next;
	}
	return (cent);
}
