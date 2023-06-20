#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *
 *@a: checks input of the function
 *Return: a if a ispositive and -a otherwise
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-1 * a);
}
