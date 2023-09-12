#include <stdio.h>


/**
 * print_times_table - Prints the n times table,
 * starting with 0.
 * @n: The value up to which the times table
 * will be printed.
 *
 * Return: 0 if n is invalid
 * (less than or equal to 0 or greater than 15),
 * 1 otherwise.  
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}
}
