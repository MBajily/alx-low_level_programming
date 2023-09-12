#include <stdio.h>


/**
 * Prints the last digit of a number and
 * returns its value.
 *
 * @param number The number from which to
 * extract the last digit.
 *
 * @return The value of the last digit.
 */
int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
