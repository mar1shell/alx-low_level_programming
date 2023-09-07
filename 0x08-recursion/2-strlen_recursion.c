#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of s
 */

int n = 0;

int i = 0;

int _strlen_recursion(char *s)
{
	if (*s == (char) 0)
		return n;
	n++;
	i++;
	_strlen_recursion(s + i);
}
