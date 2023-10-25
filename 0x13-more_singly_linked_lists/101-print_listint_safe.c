#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int different;
	
	while (head)
	{
		different = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (different > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (number);
}
