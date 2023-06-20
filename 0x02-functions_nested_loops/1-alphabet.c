#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - function that use the _putchar function
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
