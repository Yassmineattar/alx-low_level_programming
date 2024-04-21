#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 * of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: index of the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skip;

	if (list == NULL)
		return (NULL);

	 skip = list;

	do {
		list = skip;
		skip = skip->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)skip->index, skip->n);
	} while (skip->express && skip->n < value);

	if (skip->express == NULL)
	{
		list = skip;
		while (skip->next)
			skip = skip->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)skip->index);

	while (list != skip->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
