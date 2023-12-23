#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes
 * a h table
 *
 * @ht: pointer h table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nd, *tp;
	unsigned long int j;

	for (j = 0; j < ht->size; i++)
	{
		if (ht->array[j] != NULL)
		{
			nd = ht->array[j];
			while (nd != NULL)
			{
				tp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tp;
			}
		}
	}
	free(head->array);
	free(head);
}
