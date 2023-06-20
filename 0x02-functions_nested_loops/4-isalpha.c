#include "main.h"

/**
 * _isalpha - a function that checks for alphabeti character
 *@c: checks input of the function
 *
 * Return: 1 if c is letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
