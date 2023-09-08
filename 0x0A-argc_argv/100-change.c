#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: array of strings
 * Return: if error 1; else 0
 */

int main(int argc, char *argv[])
{
	int a, r, i;

	int changes[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	r = 0;
	if (a < 0)
		printf("0\n");
	for (i = 0; i < 5; i++)
	{
		r += a / changes[i];
		a %= changes[i];
	}
	printf("%d", r);
	return (0);
}
