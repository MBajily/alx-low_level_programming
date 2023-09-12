#include <stdio.h>


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
	int last_digit;
	char last;

	last_digit = number % 10;
	last_digit = last_digit * 10 + last_digit;
	last = last_digit;
	return (last);
}
