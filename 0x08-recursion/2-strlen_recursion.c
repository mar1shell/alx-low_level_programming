#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == (char) 0)
		return (0);
	n = 1 + _strlen_recursion(s + 1);
	return (n);
}
