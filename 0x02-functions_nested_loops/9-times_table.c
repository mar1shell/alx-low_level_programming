#include "main.h"

/**
 * times_table - entry point
 * Return: void
 */

void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;

			if ((a / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(a + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
