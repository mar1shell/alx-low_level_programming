#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned int i, sum;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || ((i % 5 == 0)))
			sum += i;
		i++;
	}
	printf("%u\n", sum);
	return (0);
}
