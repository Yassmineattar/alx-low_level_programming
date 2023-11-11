#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: points to the head of the list
 * @index: index of the node
 * Return: the element of its index, or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	p = head;
	while (p != NULL)
	{
		if (i == index)
			return (p);
		p = p->next;
		i++;
	}
	return (NULL);
}