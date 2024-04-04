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
	int len = 1, curr, currPow, i;
	unsigned int m = (n > 0) ? n : -n, o = m;

	if (n < 0)
	{
		_putchar('-');
	}
	while (o / 10)
	{
		len++;
		o /= 10;
	}
	for (i = 0; i < len; i++)
	{
		currPow = _pow(10, len - 1 - i);
		curr = m / currPow;
		m %= currPow;
		_putchar(curr + '0');
	}
}
