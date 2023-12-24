#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 *
 * @size: size of new sorted hash table.
 *
 * Return: NULL or pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int j;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ht->array[j] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - Adds an element to hash table.
 *
 * @ht: pointer to hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 *
 * Return: 0 or 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *tp;
	char *valueCopy;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tp = ht->shead;
	while (tp)
	{
		if (strcmp(tp->key, key) == 0)
		{
			free(tp->value);
			tp->value = valueCopy;
			return (1);
		}
		tp = tp->snext;
	}

	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(valueCopy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(valueCopy);
		free(n);
		return (0);
	}
	n->value = valueCopy;
	n->next = ht->array[idx];
	ht->array[idx] = n;
	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		tp = ht->shead;
		while (tp->snext != NULL && strcmp(tp->snext->key, key) < 0)
			tp = tp->snext;
		n->sprev = tp;
		n->snext = tp->snext;
		if (tp->snext == NULL)
			ht->stail = n;
		else
			tp->snext->sprev = n;
		tp->snext = n;
	}

	return (1);
}


/**
 * shash_table_get - Retrieve the value associated.
 *
 * @ht: A pointer to hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL orthe value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
	{
		return (NULL);
	}
	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
	{
		nd = nd->snext;
	}
	return ((nd == NULL) ? NULL : nd->value);
}


/**
 * shash_table_print - Prints a sorted hash table in order.
 *
 * @ht: A pointer to hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
	{
		return;
	}
	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *
 * @ht: pointer to hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
	{
		return;
	}
	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a sorted hash table.
 *
 * @ht: pointer to hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *nd, *tp;

	if (ht == NULL)
	{
		return;
	}
	nd = ht->shead;
	while (nd)
	{
		tp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = tp;
	}
	free(head->array);
	free(head);
}
