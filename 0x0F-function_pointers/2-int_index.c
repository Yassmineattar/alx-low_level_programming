#include "function_pointers.h"
/**
 *int_index - returns the index of the first element
 *@array:input of the function
 *@size: size of the array
 *@cmp:pointer to the function to be used to compare values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else
		return (-1);
}
