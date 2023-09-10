#include <stdio.h>


/**
 *
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
	char lowercase;
	char uppercase;
	
	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	/* Print newline character */
	putchar('\n');
	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	/* Print newline character */
	putchar('\n');
	return (0);
}
