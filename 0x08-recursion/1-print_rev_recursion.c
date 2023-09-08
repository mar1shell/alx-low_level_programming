#include "main.h"

/**
 * _print_rev_recursion - reverse a strings
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	return (i); 
}

void recurse(char *s, int length)
{
	if (length <= 0)
		return;
	printf("%c", *(s + length - 1));
	recurse(s, length - 1);
}

void _print_rev_recursion(char *s)
{
	recurse(s, _strlen(s));
}
