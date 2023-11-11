#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: point to the head of the list
 * @idx:  the index of the list
 * @n: the data of the new node
 *
 * Return:  the address of the new node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *new;

	p = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
	}
	if (p->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = p;
	new->next = p->next;
	p->next->prev = new;
	p->next = new;

	return (new);

}