#include "main.h"
/**
 * print_to_98 - function that prints all numbers from 0 to 98
 *
 * @n: input of the function
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
}
