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
		printf("Error\n");
		return (1);
	}
	if (sscanf(argv[1], "%d", &a) != 1 || sscanf(argv[2], "%d", &b) != 1)
		return (1);
	printf("%d\n", a * b);
	return (0);
}
