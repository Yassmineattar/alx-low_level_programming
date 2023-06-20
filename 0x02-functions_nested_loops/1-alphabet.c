#include "main.h"

/**
 * print_alphabet - utilizes _putchar function to prints a to z
 *
*/

void print_alphabet(void)
{	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
