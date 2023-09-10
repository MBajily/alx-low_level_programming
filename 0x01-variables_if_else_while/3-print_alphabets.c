#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a newline character,
 *
 * and then prints the alphabet in uppercase,
 * followed by another newline character.
 *
 * It uses the putchar function to print each letter of
 * the alphabet sequentially.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
