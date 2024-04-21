#include "search_algos.h"

/**
 * print_array - This function an array or a section of it
 * @array: a pointer to the first element of the array.
 * @left: the first index
 * @right: the last index
 */
void display_array(int *array, size_t left, size_t right);


/**
 * exponential_search - searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for
 * Return: the first indexwhere value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right, mid;

	if (array == NULL)
		return (-1);

	if (value == array[0])
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (left <= right)
	{
		display_array(array, left, right);
		mid = (left + right) / 2;

		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * display_array - This function an array or a section of it
 * @array: a pointer to the first element of the array.
 * @left: the first index
 * @right: the last index
 */

void display_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left < right)
		printf("%d, ", array[left++]);
	printf("%d\n", array[left]);
}
