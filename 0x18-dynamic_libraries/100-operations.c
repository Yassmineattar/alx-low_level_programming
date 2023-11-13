#include <stdio.h>
/**
 * add - function that adds two integers and returns the result
 *
 * @x: first input
 * @y: second input
 *
 * Return:sum of a and b
*/
int add(int x, int y)
{
	return (x + y);
}
/**
 * sub - function that sub two integers and returns the result
 *
 * @x: first input
 * @y: second input
 *
 * Return:sub of a and b
*/
int sub(int x, int y)
{
	return (x - y);
}
/**
 * mul - function that muls two integers and returns the result
 *
 * @x: first input
 * @y: second input
 *
 * Return:mul of a and b
*/
int mul(int x, int y)
{
	return (x * y);
}
/**
 * div - function that divides two integers and returns the result
 *
 * @x: first input
 * @y: second input
 *
 * Return:quotien of a and b
*/
int div(int x, int y)
{
	if (y == 0)
		return (0);
	return (x / y);
}
/**
 * mod - function that mods two integers and returns the result
 *
 * @x: first input
 * @y: second input
 *
 * Return:modulo of a and b
*/
int mod(int x, int y)
{
	if (y == 0)
		return (0);
	return (x % y);
}
