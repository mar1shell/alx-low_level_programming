#include "main.h"

/**
 * swap_int - function that swaps the
 * value of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 * Return:  void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
