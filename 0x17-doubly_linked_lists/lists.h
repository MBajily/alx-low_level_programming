#ifndef _LISTS_
#define _LISTS_ 
#include <stdlib.h>
#include <stdio.h>


/**
 * struct dlistint_s - 0x17: C Doubly linked lists
 *
 * @prev: previous node
 * @next: next node
 * @n: number
 *
 * Description: Doubly Linked List
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


size_t print_dlistint(const dlistint_t *h);

#endif
