#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @arr: input array
 * @size: size of the array
 * @val: value to search for
 *
 * Return: the first index where val is located, or -1 if not found
 */
int linear_search(int *arr, size_t size, int val)
{
    int j;

    /* Check if arr is NULL */
    if (arr == NULL)
        return (-1);

    /* Linear search algorithm */
    for (j = 0; j < (int)size; j++)
    {
        printf("Value checked arr[%u] = [%d]\n", j, arr[j]);

        /* Check if val is found */
        if (val == arr[j])
            return (j);
    }

    /* Value not found */
    return (-1);
}