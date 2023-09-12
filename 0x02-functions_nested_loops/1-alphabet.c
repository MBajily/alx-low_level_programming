#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - Entry point of the program.
 *
 * Calls the print_alphabet function to print
 * the alphabet in lowercase.
 *
 * Returns 0 to indicate successful execution.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
