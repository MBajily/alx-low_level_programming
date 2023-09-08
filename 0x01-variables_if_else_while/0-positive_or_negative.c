#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
#include <time.h>


/**
 * main - Entry point of the program
 * Description: This function prints the size of various types on the computer
 * it is compiled and run on. It uses the `sizeof` operator and
 * the `printf` function to display the sizes.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
