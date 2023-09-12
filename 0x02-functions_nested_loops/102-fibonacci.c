#include <stdio.h>
#include <stdlib.h>

/**
 * print_fibonacci_numbers - Prints the first n
 * Fibonacci numbers, separated by a comma and
 * a space.
 *
 * @n: The number of Fibonacci numbers to print.
 *
 * Return: None.
 */
void print_fibonacci_numbers(int n)
{
	unsigned long int a, b, c;
	int i;

	a = 1;
	b = 1;
	printf("%lu, %lu", a, b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
}


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the
 * command-line arguments.
 *
 * Return: 0 if the program executed successfully,
 * 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Usage: %s <n>\n", argv[0]);
		return (1);
	}
	n = atoi(argv[1]);
	print_fibonacci_numbers(n);
	return (0);
}
