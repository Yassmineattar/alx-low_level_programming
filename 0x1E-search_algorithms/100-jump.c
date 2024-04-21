#include "search_algos.h"

/**
 * jump_search - searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for
 * Return: the first indexwhere value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t sqt = 0, jump = 0, prev = 0;

	if (array == NULL || size == 0)
		return (-1);
	sqt = floor(sqrt(size));

	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n",
				jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		prev = jump;
		jump += sqt;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, jump);
	for (; prev <= jump && prev < size; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n",
				prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
