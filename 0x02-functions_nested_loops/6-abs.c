#include "main.h"

/**
 * _abs - entry point
 * @n: number
 * Return: always n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
