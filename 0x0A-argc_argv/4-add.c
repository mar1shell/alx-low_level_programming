#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: int
 * @argv: array of strings
 * Return: if error 1; else 0
 */

int main(int argc, char *argv[])
{
	int a, r, i;

	r = 0;
	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		while (*c)
		{
			if (!isdigit(*c))
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}
		a = atoi(argv[i]);
		r += a;
	}
	printf("%d\n", r);
	return (0);
}
