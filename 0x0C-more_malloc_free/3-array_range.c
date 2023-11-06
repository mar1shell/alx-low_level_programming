#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an arry of int containing
 * a raange of values from min to max
 * @min: int
 * @max: int
 * Return: NULL if error; else a
 */

int *array_range(int min, int max)
{
	int i, len;

	int *a = NULL;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min + i;
	return (a);
}
