#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long i, j, sum, m;

	i = 1;
	j = 2;
	m = 2;
	printf("%lu, %lu, ", i, j);
	while (m < 48)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%lu, ", j);
		m++;
	}
	sum = i + j;
	printf("%lu\n", sum);
	return (0);
}
