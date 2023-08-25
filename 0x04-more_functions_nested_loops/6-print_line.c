#include "main.h"

/**
 * print_line - entry point
 * @n: number
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n < 0)
		_putchar((car) 10);
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar((char) 10);
	}
}
