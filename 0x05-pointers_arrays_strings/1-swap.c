#include "main.h"
/**
 * swap_int - a function that swaps the value of twp integers
 *@a: checks input of the function
 *@b : input of the function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
