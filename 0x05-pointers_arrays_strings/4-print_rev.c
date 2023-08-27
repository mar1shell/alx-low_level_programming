#include "main.h"

/**
 * print_rev - functionthat prints a string
 * in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int j, k, f;

	k = 0;
	j = 0;
	while (1 > 0)
	{
		if (*(s + j) != (char) 0)
		{
			k++;
			j++;
		}
		else
			break;
	}

	k--;
	f = k;

	for (j = 0; j <= k; j++)
	{
		_putchar(*(s + f));
		f--;
	}
	_putchar((char) 10);
}
