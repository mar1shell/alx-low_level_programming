#include "main.h"

/**
 * _print_rev_recursion - reverse a strings
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i, a;

	a = 0;
	i = 0;
	while (*(s + i) != (char) 0)
	{
		i++;
		a++;
	}
	_putchar(

