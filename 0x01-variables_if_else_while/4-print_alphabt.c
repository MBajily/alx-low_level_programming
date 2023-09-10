#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet
 * in lowercase, excluding the letters 'q' and 'e',
 * followed by a newline character. It uses the putchar
 * function to print each valid letter
 * of the alphabet sequentially, and skips printing 
 * the letters 'q' and 'e' using an if statement.
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
