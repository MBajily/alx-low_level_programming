#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing
 * the djb2 algorithm.
 *
 * @str: string to hash.
 *
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 5381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c; /* h * 33 + c */
	}

	return (h);
}
