#include "main.h"
/**
 * print_last_digit - entry point
 * @n: number
 * Return: m
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = n % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');
	return (m);
}
