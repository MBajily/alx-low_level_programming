#include <stdio.h>


/**
 * Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * The function iterates through each hour
 * (0 to 23) and each minute (0 to 59)
 * using nested loops.
 *
 * It prints the hour and minute in the format
 * "hh:mm" for  * each minute of the day,
 * with leading zeros if necessary.
 */
void jack_bauer()
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
