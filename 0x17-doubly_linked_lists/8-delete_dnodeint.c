#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a specific index
 * @head: pointer to the head of the list
 * @index: the index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	p = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(p);
		return (1);
	}

	while (p != NULL && i < index)
	{
		prev = p;
		p = p->next;
		i++;
	}
	if (p == NULL)
		return (-1);

	prev->next = p->next;
	if (p->next != NULL)
		p->next->prev = prev;

	free(p);

	return (1);
}