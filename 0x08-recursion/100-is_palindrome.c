#include "main.h"

int check(char *s, int i, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: pointer to the string
 * Return: 1 if the string is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check - checks the characters for palindrome
 * @s: pointer to the string
 * @i: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check(s, i + 1, l - 1));
}

