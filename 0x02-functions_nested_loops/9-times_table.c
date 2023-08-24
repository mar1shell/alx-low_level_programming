#include "main.h"

/**
 * times_table - entry point
 * Return: 0
 */

void times_table(void)
{
	int i, j, m;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			m = j * i;
			if (m < 10)
			{
				_putchar(m + '0');
				_putchar(',');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar(',');
			}
			j++;
		}
		_putchar((char) 10);
		i++;
	}
}
