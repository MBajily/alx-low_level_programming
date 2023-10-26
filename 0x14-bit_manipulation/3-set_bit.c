#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 *
 * @index: is the index, starting from 0 of
 * the bit you want to set
 * @n: decimal number
 *
 * Returns: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int oss;

	if (index > 64)
	{
		return (-1);
	}
	for (oss = 1; index > 0; index--, oss *= 2)
	{
		;
	}
	*n += oss;
	return (1);
}
