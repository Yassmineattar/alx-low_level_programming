#include "hash_tables.h"

/**
 * t - test
 */
void t(void);


/**
 * hash_table_set - adds an element to the hash table.
 * @ht:  the hash table you want to add or update the key/value.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *head;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	if (tmp == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		if (head == NULL)
			return (0);
		head->value = strdup(value);
		if (head->value == NULL)
			return (0);
		head->key = strdup(key);
		head->next = NULL;
		ht->array[index] = head;
	}

	else
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
		}
		else
		{
			head = malloc(sizeof(hash_node_t));
			if (!head)
				return (0);
			head->key = strdup(key);
			head->value = strdup(value);
			head->next = tmp;
			ht->array[index] = head;
		}
	}
	return (1);
}
/**
 * t - test
 */
void t(void)
{
}
