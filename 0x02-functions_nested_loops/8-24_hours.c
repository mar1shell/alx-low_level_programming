#include "main.h"

/**
 * jack_bauer - entry point
 * Return: void
 */

void jack_bauer(void)
{
	int i;

	i = 0;
	while (i < 24)
	{
		int j;

		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar((char) 10);
			j++;
		}
		i++;
	}
}
