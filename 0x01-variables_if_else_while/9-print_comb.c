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
		if (i != 57)
		{
			putchar((char) 44);
			putchar((char) 32);
		}
		else
		{
			break;
		}
		i++;
	}
	putchar((char) 10);
	return (0);
}
