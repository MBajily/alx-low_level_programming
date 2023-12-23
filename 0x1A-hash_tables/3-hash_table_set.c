#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an
 * element to the hash table.
 * 
 * @ht: pointer to hash table.
 * @key: key.
 * @value: value.
 *
 * Return: 0 or 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *valueCopy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	valueCopy = strdup(value);
	if (valueCopy == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueCopy;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(valueCopy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = valueCopy;
	n->next = ht->array[idx];
	ht->array[idx] = n;

	return (1);
}
