#include "main.h"

/**
 * rec - returns the sqrt of a number
 * @n: int
 * @i: int
 * Return: -1 if no sqrt; else 0
 */

int rec(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (rec(n, i + 1));
}

/**
 * _sqrt_recursion - returns the sqrt of n
 * @n: int
 * Return: -1 if no sqrt; else 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rec(n, 0));
}
