#include "main.h"

/**
 * _print_rev_recursion - reverse a strings
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	if (*s == (char) 0)
		return (0);
	return (1 + _strlen(s + 1));
}

void recurse(char *s, int length)
{
	if (length <= 0)
		return;
	_putchar(*(s + length - 1));
	recurse(s, length - 1);
}

void _print_rev_recursion(char *s)
{
	recurse(s, _strlen(s));
}
