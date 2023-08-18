#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers, with a new line
 *@separator:string to be printed between numbers
 *@n:number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	for (i = 0; i < n - 1; i++)
	{
		printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
