#include "main.h"

/**
 * add - entry point
 * @n: number
 * @m: number
 * Return: 0
 */

int add(int n, int m)
{
	int a;

	a = n + m;
	if (a % 10 == 0)
		_putchar(a + '0');
	else if (a % 100 == 0)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}
	else
	{
		_putchar((a / 100) + '0');
		_putchar(((a % 100) - (a % 10)) + '0');
		_putchar((a % 10) + '0');
	}
}
