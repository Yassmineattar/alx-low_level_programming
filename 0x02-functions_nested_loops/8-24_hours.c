#include "main.h"
/**
 * jack_bauer- prints every minute of the day
*/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '1'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '5'; k++)
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
	i = '2';

	for (j = '0'; j <= '3'; j++)
		for (k = '0'; k <= '5'; k++)
			for (l = '0'; l <= '9'; l++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				_putchar('\n');
			}
}
