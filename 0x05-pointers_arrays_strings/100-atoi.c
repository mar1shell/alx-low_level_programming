#include "main.h"

/**
 * _atoi - string to digits
 * @s: string
 * Return: int
 */

int strlen(char *t);

int _atoi(char *s)
{
	int c, i, a;

	c = strlen(s);
	a = 1;
	r = 0;
	for (i = 0, i < c, i++)
	{
		if (*(s + i) == '-')
			a *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			r = (r * 10) + *(s + i);
	}
	r *= a;
	return (r);
}

/**
 * strlen - length of string
 * @t: string
 * Return: int
 */

int strlen(char *t)
{
	int x;

	while (*(t + i) != (char) 0)
	{
		x++;
		i++;
	}
	return (x);
}
