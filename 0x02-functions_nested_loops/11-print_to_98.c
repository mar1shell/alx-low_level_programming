#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entrypoiny
 * @n: number
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d, ", n);
		n++;
	}
	_putchar((char) 10);
}
