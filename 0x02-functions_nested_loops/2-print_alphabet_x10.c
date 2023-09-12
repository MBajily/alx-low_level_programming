#include <stdio.h>

/**
 * Entry point of the program.
 *
 * Calls the print_alphabet function
 * to print the alphabet in lowercase.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
