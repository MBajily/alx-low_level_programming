#include <stdio.h>

/**
 * main - Finds and prints the sum of the
 * even-valued terms in the Fibonacci sequence,
 * considering terms that do not exceed 4,000,000.
 *
 * Return: 0 if the program executed successfully.
 */
int main(void)
{
	unsigned long int a, b, c, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
