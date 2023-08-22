#include <stdio.h>

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar((char) i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		putchar((char) i);
		i++;
	}
	putchar((char) 10);
	return (0);
}
