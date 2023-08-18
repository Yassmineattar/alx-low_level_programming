#include "variadic_functions.h"
/**
 * print_strings - prints strings, with a new line
 *@n:number of strings
 *@separator:string to be printed between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
