#include "hash_tables.h"

/**
 * hash_table_print - a function that
 * prints a h table.
 *
 * @ht: pointer.
 *
 * Description: Key/value.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	unsigned char cflag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (cflag == 1)
			{
				printf(", ");
			}
			nd = ht->array[i];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
				{
					printf(", ");
				}
			}
			cflag = 1;
		}
	}
	printf("}\n");
}
