#include "main.h"
/**
 * create_array - creates an array of chars
 *@size: size of the array
 *@c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
