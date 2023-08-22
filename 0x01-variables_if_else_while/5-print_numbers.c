#include <stdio.h>

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar((char) 10);
	return (0);
}
