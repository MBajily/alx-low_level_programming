#include <stdio.h>


/**
 * print_to_98 - Function to print all natural numbers
 * from
 * @n: to 98, separated by a comma
 * and space, followed by a new line.
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
