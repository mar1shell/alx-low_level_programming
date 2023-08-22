#include <stdio.h>

/**
 * main-entry point
 * Return: 0
 */

int main(void)
{
	int i;

	int j;

	i = 48;
	while (i < 57)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar((char) i);
			putchar((char) j);
			if (i != 56 || j != 57)
			{
				putchar((char) 44);
				putchar((char) 32);
			}
			else
			{
				break;
			}
			j++;
		}
		i++;
	}
	putchar((char) 10);
	return (0);
}
