#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar((char) i);
		i++;
	}
	return (0);
}
