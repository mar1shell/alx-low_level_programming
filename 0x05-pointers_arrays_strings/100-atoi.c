#include "main.h"

/**
 * _atoi - turns a string int integer
 * @s: string
 * Return: result
 */

int _atoi(char *s)
{
	int i, sign, result;

	sign = 1;
	result = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			sign *= -1;
	}
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
			result = result * 10 + *(s + i);
	}
	return (sign * result);
}
