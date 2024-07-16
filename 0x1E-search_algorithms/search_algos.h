#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer value
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: Node structure for a singly linked list
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer value
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: Node structure for a singly linked list with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int linear_search(int *arr, size_t size, int val);

#endif