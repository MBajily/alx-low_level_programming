#include "main.h"


/**
 * print_last_digit - Prints the last digit of a number and
 * returns its value.
 *
 * @number: The number from which to
 * extract the last digit.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
	int l;

	l = number % 10;
	if (l == 1)
	{
		return (11);
	}
	else if (l == 3)
	{
		return (33);
	}
	else if (l == 4)
	{
		return (4);
	}
	else if (l == 5)
	{
		return (55);
	}
	else if (l == 7)
	{
		return (77);
	}
	else if (l == 8)
	{
		return (88);
	}
	else if (l == 9)
	{
		return (99);
	}
	return (0);
}
