#include "main.h"

/**
 * _atoi - turns a string int integer
 * @s: string
 * Return: result
 */

int _atoi(char *s)
{
	int i, sign, result, a;

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
		{
			a = (int) *(s + i) - (int) '0';
			result = result * 10 + a;
		}
	}
	return (sign * result);
}
