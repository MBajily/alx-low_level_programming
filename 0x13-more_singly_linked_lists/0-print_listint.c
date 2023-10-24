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
	const listint_t *pointer;
	unsigned int center = 0;

	pointer = h;
	while (pointer)
	{
		printf("%d\n", pointer->n);
		center++;
		pointer = pointer->next;
	}
	return (center);
}
