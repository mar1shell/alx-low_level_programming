#include "main.h"

/**
 * _strlen - function that return the length
 * of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (1 > 0)
	{
		if (*(s + i) != (char) 0)
		{
			sum++;
			i++;
		}
		else
			break;
	}
	return (sum);
}
