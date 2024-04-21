#include "search_algos.h"

/**
 * advanced_binary - searches for a value
 * in an array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: return the first index where value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i, half;

	if (array == NULL || size == 0)
		return (-1);
	half = (size - 1) / 2;
	printf("Searching in array:");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? "" : ",", array[i]);
	printf("\n");

	if (value == array[half])
	{
		if (half > 0)
			return (advanced_binary(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (advanced_binary(array, half + 1, value));
	half++;
	i = advanced_binary(array + half, size - half, value);

	if (i != (size_t)-1)
		return (i + half);

	return (-1);
}
