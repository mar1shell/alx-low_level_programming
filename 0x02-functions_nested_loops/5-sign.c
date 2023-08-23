#include "main.h"

/**
 * print_sign - entry point
 * @n: number
 * Return: 1 if positive
 * 0 if zero
 * otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar((char) 48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
