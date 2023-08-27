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

	char *t = NULL;

	t = s;
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
	f = k;
	for (i = 0; i <= k; i++)
	{
		*(s + i) = *(t + f);
		f--;
	}
}
