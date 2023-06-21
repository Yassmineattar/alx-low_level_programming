#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			p = i * j;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
