#include "main.h"
#include <stddef.h>

/**
 * rev_string - function to reverse a
 * string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, f, k;

	char a[150];

	for (i = 0; i < 150; i++)
		a[i] = 0;
	i = 0;
	k = 0;
	while (1 > 0)
	{
		if (*(s + i) != (char) 0)
		{
			k++;
			i++;
		}
		else
			break;
	}
	k--;
	for (i = 0; i <= k; i++)
		a[i] = *(s + i);
	f = k;
	for (i = 0; i <= k; i++)
	{
		*(s + i) = a[f];
		f--;
	}
}
