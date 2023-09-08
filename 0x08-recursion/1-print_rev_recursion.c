#include "main.h"

/**
 * _print_rev_recursion - reverse a strings
 * @s: string
 * Return: void
 */

void recurse(char *s, int length)
{
	if (length < 0)
		return;
	_putchar(*(s + length));
	recurse(s, length - 1);
}

void _print_rev_recursion(char *s)
{
	recurse(s, (int) sizeof(s));
}
