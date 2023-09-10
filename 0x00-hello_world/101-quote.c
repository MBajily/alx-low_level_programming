#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"


/**
 * main - Entry point of the program
 *
 * Description: This program prints the message
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * It uses the write function from the unistd.h header
 * to write the message to the standard error.
 *
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, MESSAGE, sizeof(MESSAGE) - 1);
	return (1);
}
