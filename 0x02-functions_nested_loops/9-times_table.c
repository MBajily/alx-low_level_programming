#include <stdio.h>


/** 
 * times_table - Function to generate and
 * print the multiplication table for the
 * number 9
 *
 * Return: 0
 */
void times_table()
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			printf("%2d, ", result);
		}
		printf("$\n");
	}
}
