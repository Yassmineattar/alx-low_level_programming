#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 *@x: input of the function
 *@y: input of the function
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
