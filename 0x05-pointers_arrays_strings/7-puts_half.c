#include "main.h"

/**
 * puts_half - function that prints the
 * last half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, c, n;

	i = 0;
	c = 0;
	while (*(str + i) != (char) 0)
	{
		c++;
		i++;
	}
	if (c % 2 == 0)
		n = c / 2;
	else
		n = (c - 1) / 2;
	for (i = n; i < c; i++)
	{
		_putchar(*(str + i));
	}
	_putchar((char) 10);
}
