#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations
 * of single-digit numbers
 * in ascending order, separated by a comma and a space.
 * It achieves this by using a loop and the `putchar` function.
 * The loop iterates from '0' to '9', and within each iteration,
 * it prints the current digit using `putchar`. After printing each digit,
 * a comma and a space are printed,
 * except for the last digit. Finally, a newline character is printed using
 * another `putchar` call to create a new lin
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
