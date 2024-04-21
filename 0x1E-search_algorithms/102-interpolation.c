#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for
 * Return: the first indexwhere value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t prob = 0, low = 0, high = (int)size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		prob = low + ((double)(high - low) * (value - array[low]) / (
				array[high] - array[low]));
		if (prob > size)
		{
			printf("Value checked array[%ld] is out of range\n",
					prob);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n",
				prob, array[prob]);
		if (array[prob] == value)
			return (prob);
		if (array[prob] < value)
			low = prob + 1;
		else
			high = prob - 1;
	}
	return (-1);
}
