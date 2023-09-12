#include <stdio.h>


/**
 * times_table - Function to generate and
 * print the multiplication table for the
 * number 9
 *
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 9)
			{
				printf("%2d", result);
			}
			else if (j == 0)
			{
				printf("%d, ", result);
			}
			else
			{
				printf("%2d, ", result);
			}
		}
		printf("\n");
	}
}
