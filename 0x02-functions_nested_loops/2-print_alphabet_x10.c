#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return0
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int j;

		j = 97;
		while (j < 123)
		{
			_putchar((char) j);
			j++;
		}
		_putchar((char) 10);
	}
}
