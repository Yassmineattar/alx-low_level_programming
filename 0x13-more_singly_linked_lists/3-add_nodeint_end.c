#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to the first element in the linked list
 * @n: data to be inserted in the first node
 * Return: pointer to the new node, or NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (!*head)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
