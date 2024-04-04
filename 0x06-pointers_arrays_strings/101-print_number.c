#include "main.h"

/**
 * _pow - power of E to x
 * @E: exponent
 * @x: power
 * Return: E^x
 */

int _pow(int E, int x)
{
	int pow, i;

	pow = 1;
	for (i = 0; i < x; i++)
	{
		pow *= E;
	}
	return (pow);
}

/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * Return: void;
 */

void print_number(int n)
{
	int len = 1, m = n, curr, currPow, i;

	while (m / 10)
	{
		len++;
		m /= 10;
	}
	if (n < 0)
	{
		_putchar("-");
		n = -n;
	}
	for (i = 0; i < len; i++)
	{
		currPow = _pow(10, len - 1 - i);
		curr = n / currPow;
		n %= currPow;
		_putchar(c + '0');
	}
}
