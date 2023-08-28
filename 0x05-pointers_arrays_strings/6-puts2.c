#include "main.h"

/**
 * puts2 - function to print odd indexed chrachters
 * in a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int c, i;

	while (1 > 0)
	{
		if (*(str + i) != (char) 0)
		{
			c++;
			i++;
		}
		else
			break;
	}
	c--;
	for (i = 0; i <= c; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar((char) 10);
}
