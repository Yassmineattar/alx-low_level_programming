#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *@str: checks input of the function
 */
void puts_half(char *str)
{
	int l = 0;
	int i, n;

	while (str[l] != '\0')
		l++;
	n = (l - 1) / 2;
	for (i = n + 1; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
