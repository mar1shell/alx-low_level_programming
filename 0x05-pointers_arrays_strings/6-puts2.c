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

	c = 0;
	i = 0;
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
	i = 0;
	while(i <= c)
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar((char) 10);
}
