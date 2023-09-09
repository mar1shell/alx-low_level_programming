#include "main.h"

/**
 * reverse_array - reverse array
 * @a: pointer to array
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
