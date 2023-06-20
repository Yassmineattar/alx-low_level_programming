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
	if (n >= 0)
		return (n % 10);
	else
		return (-n % 10);
}
