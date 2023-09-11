#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet
 * in reverse order, followed by a new line.
 *
 * It utilizes a `for` loop to iterate through the alphabet
 * in reverse, starting from 'z' and ending at 'a'.
 * The `putchar` function is used to print each letter sequentially.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
