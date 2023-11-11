#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list.
 * @head: points to the head of the list
 *
 * Return: sum of the elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *p;

	p = head;
	while (p != NULL)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}