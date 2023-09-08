#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: array of strings
 * Return: 1 if error; else 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		puts("Error\n");
		return (1);
	}
	sscanf(argv[1], "%d", &a);
	sscanf(argv[2], "%d", &b);
	printf("%d\n", a * b);
	return (0);
}
