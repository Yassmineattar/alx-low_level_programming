#include "search_algos.h"

/**
 * binary_search - searches for a value
 * in an array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: return the first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (end >= start)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end]);

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
