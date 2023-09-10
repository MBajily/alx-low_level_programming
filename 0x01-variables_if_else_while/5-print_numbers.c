#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers
 * of base 10, starting from 0,
 * followed by a newline character. It uses the putchar
 * function to print each digit sequentially.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
