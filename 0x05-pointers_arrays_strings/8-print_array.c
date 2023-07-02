#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 *@a: checks input of the function
 *@n: input of the function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
