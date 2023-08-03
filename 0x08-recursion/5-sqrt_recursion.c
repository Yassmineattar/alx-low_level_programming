#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: input of the function
 * Return: natural square of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
#include "main.h"
/**
 * square - search for the square root
 *@n: input
 *@x: input
 * Return: int
 */
int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
