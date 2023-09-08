#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	if (*s == (char) 0)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * recurse - reverse a string
 * @s: string
 * @length: int
 * Return: void
 */

void recurse(char *s, int length)
{
	if (length <= 0)
		return;
	_putchar(*(s + length - 1));
	recurse(s, length - 1);
}

/**
 * _print_rev_recursion - reverse a string
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	recurse(s, _strlen(s));
}
