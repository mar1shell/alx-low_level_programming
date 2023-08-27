#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (1 > 0)
	{
		if (*(str + i) != (char) 0)
		{
			_putchar(*(str + i));
			i++;
		}
		else
			break;
	}
	_putchar((char) 10);
}
