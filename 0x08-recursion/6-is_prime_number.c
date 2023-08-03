#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime numbe
 *@n:input of the function
 *@x:input of the function
 * Return: result
 */
int check(int n, int x);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - checks if theres dividers
 *@n:input of the function
 *@x:input of the function
 * Return: result
 */
int check(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (check(n, x + 1));
}
