#include "main.h"

/**
 * print_diagonal - entry point
 * @n: number
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar((char) 10);
	else
	{
		int i, j;

		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar((char) 32);
				j++;
			}
			_putchar((char) 92);
			_putchar((char) 10);
			i++;
		}
	}
}
