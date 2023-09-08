#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
#include <time.h>


/* betty style doc for function main goes there */
/*
 *  main - Entry point of the program
 *
 *
 *
 *
 *
 *
 *
 * Positive, negative, zero
 */
int main(void)
{
	int n;
	srand(time(0));/* Seed the random number generator with the current time*/ 
	n = rand() - RAND_MAX / 2; /* Generate a random number between -100 and 100*/
	/* your code goes there */
	printf("%d is ", n);	
	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("negative\n");
	}
	return (0);
}
