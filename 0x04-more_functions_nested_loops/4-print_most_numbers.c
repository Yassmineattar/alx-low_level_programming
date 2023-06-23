#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * but not 4 and 2
*/

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
