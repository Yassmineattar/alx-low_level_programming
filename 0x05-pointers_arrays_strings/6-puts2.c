#include "main.h"
/**
 * puts2 - a function that print everx 2 character of a string
 *@str: checks input of the function
 */
void puts2(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
		l++;
	for (i = 0; i < l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

