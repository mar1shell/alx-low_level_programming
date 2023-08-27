#include "main.h"

/**
 * print_rev - functionthat prints a string
 * in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i, j, k, f;

	i = 0;
	k = 0;
	while (1 > 0)
	{
		if (*(s + i) != (char) 0)
		{
			k++;
			i++;
		}
		else
			break;
	}

	k--;
	f = k;

	for (j = 0; j <= k; j++)
	{
		_putchar(*(s + k));
		f--;
	}
	_putchar((char) 10);
}
