#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: points to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = p->next;
		free(p);
	}
}
