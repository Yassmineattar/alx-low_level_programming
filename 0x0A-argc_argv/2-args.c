#include <stdio.h>

/**
 * main - Entry point
 *@argc:number of arguments
 *@argv: pointer to array
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		i++;
		argc--;
	}
	return (0);
}
