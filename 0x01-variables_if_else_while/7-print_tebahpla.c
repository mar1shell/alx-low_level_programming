#include <stdio.h>

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar((char) i);
		i--;
	}
	putchar((char) 10);
	return (0);
}
