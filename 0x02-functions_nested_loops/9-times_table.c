#include "main.h"

/**
 * times_table - entry point
 * Return: 0
 */

void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			m = j * i;
			_putchar(m + '0');
			_putchar(',');
			_putchar((char) 10);
			j++;
		}
		i++;
	}
}
