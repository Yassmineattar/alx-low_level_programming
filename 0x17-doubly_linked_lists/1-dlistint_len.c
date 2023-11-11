#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: points the head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
