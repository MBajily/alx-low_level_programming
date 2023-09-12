#include <stdio.h>


/**
 * main - Finds and prints the first 98
 * Fibonacci numbers, starting with 1
 * and 2, separated by a comma and a space.
 *
 * Return: 0 if the program executed successfully.
 */
int main(void)
{
	int count;
	unsigned int a, b, c;
	
	count = 2;
	a = 1;
	b = 2;
	printf("1, 2");
	while (count < 98)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
