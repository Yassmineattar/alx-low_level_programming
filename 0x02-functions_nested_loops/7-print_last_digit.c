#include "main.h"
/**
 * print_last_digit - a function that prits the last digit
 *
 *@n: checks input of the function
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
		r = n % 10;
	else
		r = -1 * (n % 10);
	_putchar(r + '0');
	return (r);
}
