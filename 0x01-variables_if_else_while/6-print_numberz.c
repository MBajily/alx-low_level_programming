#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit
 * numbers of base 10 starting from 0,
 * followed by a newline character. It achieves this by
 * utilizing the ASCII values and the `putchar` function
 * to print each digit sequentially without using variables
 * of type `char`. The digits are obtained by adding the
 * respective value to the ASCII
 * value of the character '0'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i; i <= 10; i++)
	{
		putchar('0' + i)
	}	
	putchar('\n');
	return (0);
}
