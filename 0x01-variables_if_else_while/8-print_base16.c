#include <stdio.h>

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar((char) i);
		i++;
	}
	i = 97;
	while (i < 103)
	{
		putchar((char) i);
		i++;
	}
	putchar((char) 10);
	return (0);
}
