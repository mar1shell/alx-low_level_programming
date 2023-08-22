#include <stdio.h>

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i;

	i = 123;
	while (i > 97)
	{
		putchar((char) i);
		i--;
	}
	putchar((char) 10);
	return (0);
}
