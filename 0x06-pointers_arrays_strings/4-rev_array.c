#include "main.h"

/**
 * reverse_array - reverse array
 * @a: pointer to array
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int z[n];

	int i;
	z = a;
	for (i = 0; i < n; i++)
	{
		a[i] = z[n - 1 - i];
	}
}
