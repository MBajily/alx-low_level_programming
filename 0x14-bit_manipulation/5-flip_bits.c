#include <stdio.h>
#include "main.h"


/**
 * flip_bits - a function that returns the number
 * of bits you would need to flip to get from one
 * number to another.
 *
 * @n: 1st integer.
 * @m: 2nd integer.
 *
 * Return: an integer.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int different = n ^ m;

	while (different)
	{
		count++;
		different &= (different - 1);
	}
	return (count);
}
