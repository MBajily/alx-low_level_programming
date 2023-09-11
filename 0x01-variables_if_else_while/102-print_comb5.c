#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers in ascending order, separated by a comma
 * and a space.
 *
 * Finally, a newline character is printed using another `putchar'
 * call to create a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
