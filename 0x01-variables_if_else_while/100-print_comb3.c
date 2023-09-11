#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of two digital
 * in ascending order, separated by a comma and a space. It achieves this
 * by utilizing nested loops and the `putchar` function. The outer loop
 * iterates from the ASCII code of '0' to the ASCII code of '8', and the
 * inner loop iterates from the ASCII code of the digit next to the current
 * outer loop digit to the ASCII code of '9'. Within each iteration, it uses
 * `putchar` to print the corresponding characters. After printing each digit
 * combination, a comma and a space are printed, except for the last combination.
 *
 * Finally, a newline character is printed using another `putchar` call to create
 * a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 <= 56; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 != 56 || digit2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
