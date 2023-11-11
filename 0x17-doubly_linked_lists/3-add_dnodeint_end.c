#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: points to the head of the list
 * @n: the node's data
 *
 * Return: head or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}

	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
		new->prev = p;
	}
	return (new);
}