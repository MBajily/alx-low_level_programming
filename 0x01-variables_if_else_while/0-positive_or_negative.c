#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Positive, negative, zero
 */
int main(void)
{
	int n;
	srand(time(0));/* Seed the random number generator with the current time*/
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
	return 0;
}
