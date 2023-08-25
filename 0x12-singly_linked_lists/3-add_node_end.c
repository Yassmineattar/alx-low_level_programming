#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list_l list
 * @head: double pointer to the list_t list
 * @str: string input
 *
 * Return: address of the new element, or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = n;
	return (n);
}
