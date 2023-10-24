#include "lists.h"

/**
 * listint_len - calculate n elements
 *
 * @h: the pointer of the list
 *
 * Return: a number
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cent = 0;

	tp = h;
	while (tp)
	{
		cent++;
		tp = tp->next;
	}
	return (cent);
}
