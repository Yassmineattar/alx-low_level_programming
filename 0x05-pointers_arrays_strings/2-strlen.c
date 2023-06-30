#include "main.h"
/**
 * _strlen - finction that returns the length of a string
 * @s : input of the function
 *
 * Return:the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	_putchar(i + '0');
}
