#include "main.h"

/**
 * print_last_digit - entry point
 * @n: number
 * Return: n
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = n % 10;
	_putchar(m + '0');
	return (m);
}
