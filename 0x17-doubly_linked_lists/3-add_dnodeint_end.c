#include "lists.h"


/**
 * add_dnodeint_end - Write a function that adds
 * a new node at the end of a dlistint_t list. 
 *
 * @head: list head
 * @n: the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *v;
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = NULL;
	v = *head;
	if (v != NULL)
	{
		while (v->next != NULL)
		{
			v = v->next;
		}
		v->next = new_element;
	}
	else
	{
		*head = new_element;
	}
	new_element->prev = v;
	return (new_element);
}
