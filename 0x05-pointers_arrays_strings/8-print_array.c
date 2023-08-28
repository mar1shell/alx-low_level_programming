#include "main.h"
#include <stdio.h>

/**
 * print_array - function that the first n elemnts
 * of an array
 * @a: array
 * @n: number
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;


	n--;
	for (i = 0; i < n; i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + n));
}
