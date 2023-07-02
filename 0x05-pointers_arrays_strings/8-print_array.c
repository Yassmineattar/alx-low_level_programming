#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 *@a: checks input of the function
 *@n: input of the function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i] + '0');
	_putchar('\n');
}
