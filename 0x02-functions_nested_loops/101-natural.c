#include <stdio.h>


/**
 * calculate_sum - Computes the sum of all
 * the multiples of 3 or 5 below a given limit.
 *
 * @limit: The upper limit (excluded) of the
 * numbers to consider.
 *
 * Return: The sum of the multiples of 3 or 5
 * below the given limit.
 */
int calculate_sum(int limit)
{
	int sum;
	int i;

	sum = 0;
	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}


/**
 * main - Computes and prints the sum of
 * all the multiples of 3 or 5 below a given limit.
 *
 * @limit: The upper limit (excluded) of
 * the numbers to consider.
 *
 * Return: 0 upon successful execution.
 */
int main()
{
	int limit;
	int sum;

	limit = 1024;
	sum = calculate_sum(limit);
	printf("%d\n", sum);
	return (0);
}
