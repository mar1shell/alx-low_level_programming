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
		if (i != 113 && i != 101)
		{
			putchar((char) i);
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	putchar((char) 10);
	return (0);
}
