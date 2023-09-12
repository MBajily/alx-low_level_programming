#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point of the program.
 *
 * Calls the print_alphabet function
 * to print the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
