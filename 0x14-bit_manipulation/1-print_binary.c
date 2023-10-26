#include "main.h"
#include <stdio.h>


/**
 * print_binary - a function that prints
 * the binary representation of a number.
 *
 * @n: a variable.
 */
void print_binary(unsigned long int n)
{
	unsigned long int crnt;
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		crnt = n >> i;

		if (crnt & 1)
		{
			count++;
			putchar('1');
		}
		else if (count)
		{
			putchar('0');
		}
	}
	if (!count)
	{
		putchar('0');
	}

	return;
}
