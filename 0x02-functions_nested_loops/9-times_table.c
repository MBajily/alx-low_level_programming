#include <stdio.h>


/** 
 * Function to generate and print the multiplication table for the number 9
 */
void times_table()
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int result

			result = i * j;
			printf("%2d, ", result);
		}
		printf("$\n");
	}
}
