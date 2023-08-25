#include "main.h"

/**
 * more_numbers - entry point
 * Return: 0
 */

void more_numbers(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		k = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				k -= 10;
				_putchar('1');
			}
			if (k < 0)
				k += 10;
			_putchar(k + '0');
			j++;
			k++;
		}
		i++;
		_putchar((char) 10);
	}
}

