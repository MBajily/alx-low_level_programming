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
	unsigned int a, b, temp;

	count = 2;
	a = 1;
	b = 2;
	printf("1, 2");
	while (count < 98)
	{
		temp = a;
		a = b;
		b = temp + b;
		count++;
		printf(", %u", b);
	}
	printf("\n");
	return (0);
}
