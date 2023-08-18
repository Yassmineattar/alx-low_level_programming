#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ptr[r] = str[r];

	return (ptr);
}
