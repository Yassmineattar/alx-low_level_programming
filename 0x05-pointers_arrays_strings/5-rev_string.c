#include "main.h"
/**
 * rev_string - a function that reverses a string
 *@s: checks input of the function
 */
void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char c;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
