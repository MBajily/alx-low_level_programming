#include <stdio.h>
#include "main.h"


/**
 * print_alphabet_x10 - Entry point of the program.
 *
 * Calls the print_alphabet function
 * to print the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}
}
